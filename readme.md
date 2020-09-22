# Made advanced C++ 2020
### Домашние задания

##### Обзор веток и контента:
В репозитории 3 типа branch-ей:
+ master. Исходно он содержит в себе только README.md. По мере вашего решения задачек вам нужно будет создавать PR именно в этот branch. В asignee указывать github двоих ассистентов.
+ hw_${n}_{task}. Это ветки для маленьких домашних заданий. Всего планируется 10 штук, однако это число может измениться (в меньшую сторону). Малые домашние задания – это часто один файл, в который надо дописать что-то. Маленькие задания проверяют усвоение контента. Тестов для них нет, ассистенты проверяют все ручками.
+ proj_${n}_{task}. Это ветки для больших домашних заданий, то есть проектов. Всего планируется 5 штук, однако это число может измениться (в меньшую сторону). Большие домашние задания предполагаются многомодульными, то есть могут состоять из нескольких файлов, namespace-ов. Структура каждого большого дз следующая: на корневом уровне лежит папка с названием задания внутри которой лежит 4 файла: 2 директории и 2 регулярных файла. Директории – src и test. Директория test содержит тесты. Ее изменение карается смертной казнью =). Регулярные файлы readme.md и run.sh содержат описание задачи и скрипт запуска тестов соответственно (запускаем все под UNIX системой с установленным gcc). 

##### Алгоритм сдачи задания.
1) Сделать fork этого репозитория, если не делали его до этого. Надо добавить дополнительный remote для репозитория с которого вы сделали fork. [Stack Overflow](https://stackoverflow.com/questions/3903817/pull-new-updates-from-original-github-repository-into-forked-github-repository).
2) Забрать все branch-и с исходного репозитория pull-ом с remote-а оригинального репозитория (с которого вы сделали fork).
3) Сделать checkout на соответствующий branch с задачей.
4) Прочитать условие и решить задачу. Убедиться в том, что решение верное и проходит все тесты (если они есть).
5) Создать pull request в master (*Очевидно, в master вашего репозитория*). В asignee указать двоих ассистентов.

##### Разбалловка.
+ Маленькие задачи стоят меньше, чем большие: суммарный вклад маленьких задач в оценку: 30%. Дедлайн на маленькое задание – ровно 1 неделя (7 суток) с 23:59 даты публикации (даты публикации указаны в readme.md соответствующих задачек).
+ Большие задачи – дорогие. Суммарный вклад: 70%.
+ Нельзя обещать что все задачи в каждой категории будут стоить одинаково. В readme.md каждой задачи будет указано конкретное кол-во баллов за каждую задачу!
+ Суммарное кол-во баллов: 100.
+ Перевод баллов в оценку может производиться нелинейно с учетом рейтинга студентов. Алгоритм перевода будет опубликован ближе к концу нашего курса (в прочем, он вас интересовать сильно не должен – лучше смотреть на свою позицию в рейтинге). Позже мы создадим табличку в которой будут опубликованы баллы студентов.

##### Кодстайл.
Прежде всего, хочу обратить ваше внимание на то, что необходимо будет теперь постепенно привыкать к код-стайлу и учиться писать читабельные программы. Мы будем придерживаться [гугл-кодстайла](https://google.github.io/styleguide/cppguide.html). Отныне, за плохой код-стайл, на усмотрение ассистента, оценка за задачу может быть уменьшена вдвое и больше от исходного количества баллов. 

Вы можете воспользоваться утилитой [clang-format](https://clang.llvm.org/docs/ClangFormatStyleOptions.html) (что-то типа РЕР8 для С++) для более удобного форматирования и стилизации вашего кода, либо любыми другими. Про то, как подключить его в CLion, можно посмотреть [тут](https://www.jetbrains.com/help/clion/clangformat-as-alternative-formatter.html#clion-support). Также, в CLion предусмотрены очень удобные инструменты для рефакторинга вашего кода. Про это читайте [тут](https://blog.jetbrains.com/clion/2014/12/refactorings-in-clion-be-safe-and-quick/). 

##### Дорешки.
Вы можете отправлять ваше домашнее задание вплоть до жесткого дедлайна, который указан к соответствующему заданию. Далее, последует несколько итераций проверок-дорешек сданного вами задания. А именно, если в вашем решении будут неточности, ассистенты будут отправлять вам его на исправление. Сделать это можно будет ровно на неделе, которая идет после жесткого дедлайна. Если вы не успеете исправить ошибки за эту неделю, за задачу ставится либо дробный балл, либо 0 баллов. Также, количество исправлений (итераций дорешек) ограничено сверху: вы можете сделать лишь до 3-х исправлений одного и того же задания. Сделано это с целью того, чтобы вы старались максимально эффективно исправлять, прежде чем отправлять на очередную дорешку, т.к. могут быть те, кто будет пренебрегать этой возможностью и генерировать очень много исправлений, бесполезно загружая ассистентов.

Также, в связи с этим, совершенно нормально, что отправленное вами задание не проверили в тот же день :) В лучшем случае, вам его проверят до жесткого дедлайна, но в основном через 1-2 дня после жесткого дедлайна. Особенно, если вы отправите решение за час до дедлайна. Но постараемся сделать так, чтобы исправлять успевали все, так что эти правила носят скорее формальный характер.

##### Что-то пошло не так или непонятно?
По технической части и условиям задач писать в tg: @konstantinleladze

По вопросам к работе ассистентов и орг.вопросам писать в tg: @mipt_user 

