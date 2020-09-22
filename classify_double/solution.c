#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * Library-level functions.
 * You should use them in the main sections.
 */

uint64_t convertToUint64(double number) { return *((uint64_t *) (&number)); }

bool getBit(const uint64_t number, const uint8_t index) {
    return (number >> index) & 1;
}
uint64_t getFraction(uint64_t number) {
    return (number << 12) >> 12;
}
/**
 * Checkers here:
 */

bool checkForPlusZero(uint64_t number) {
    return number == 0;
}

bool checkForMinusZero(uint64_t number) { return number == 0x8000000000000000; }

bool checkForPlusInf(uint64_t number) {
    return number == 0x7FF0000000000000;
}

bool checkForMinusInf(uint64_t number) {
    return number == 0xFFF0000000000000;
}
bool checkForNormal(uint64_t number) {
    uint64_t exp = number & 0x7FF0000000000000;
    return exp > 0 && exp < 0x7FF0000000000000;
}

bool checkForPlusNormal(uint64_t number) {
    return checkForNormal(number) && !getBit(number, 63);
}

bool checkForMinusNormal(uint64_t number) {
    return checkForNormal(number) && getBit(number, 63);
}

bool checkForPlusDenormal(uint64_t number) {
    return ((number >= 0x0000000000000001) && (number <= 0x000FFFFFFFFFFFFF));
}

bool checkForMinusDenormal(uint64_t number) {
    return ((number >= 0x8000000000000001) && (number <= 0x800FFFFFFFFFFFFF));
}

bool checkForSignalingNan(uint64_t number) {
    return number & 0x7FF0000000000000 == 0x7FF0000000000000 && !getBit(number, 51) && getFraction(number) != 0;
}

bool checkForQuietNan(uint64_t number) {
    return number & 0x7FF0000000000000 == 0x7FF0000000000000 && getBit(number, 51);
}

void classify(double number) {
    if (checkForPlusZero(convertToUint64(number))) {
        printf("Plus zero\n");
    }

    else if (checkForMinusZero(convertToUint64(number))) {
        printf("Minus zero\n");
    }

    else if (checkForPlusInf(convertToUint64(number))) {
        printf("Plus inf\n");
    }

    else if (checkForMinusInf(convertToUint64(number))) {
        printf("Minus inf\n");
    }

    else if (checkForPlusNormal(convertToUint64(number))) {
        printf("Plus normal\n");
    }

    else if (checkForMinusNormal(convertToUint64(number))) {
        printf("Minus normal\n");
    }

    else if (checkForPlusDenormal(convertToUint64(number))) {
        printf("Plus Denormal\n");
    }

    else if (checkForMinusDenormal(convertToUint64(number))) {
        printf("Minus Denormal\n");
    }

    else if (checkForSignalingNan(convertToUint64(number))) {
        printf("Signailing NaN\n");
    }

    else if (checkForQuietNan(convertToUint64(number))) {
        printf("Quiet NaN\n");
    }

    else {
        printf("Error.\n");
    }
}
