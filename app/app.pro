TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c
SOURCES += my_functions.c

HEADERS += my_functions.h

QMAKE_CFLAGS += -Wall -Wextra -Werror
# gcov
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov
