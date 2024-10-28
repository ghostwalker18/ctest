include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

HEADERS += tst_test1.h 
HEADERS += tst_stdout.h
HEADERS +=  fibonachi_test.h
HEADERS += ../app/my_functions.h

SOURCES += main.cpp 
SOURCES += ../app/my_functions.c

QMAKE_CXXFLAGS += -Wall -Wextra -Werror
QMAKE_CFLAGS += -Wall -Wextra -Werror
# gcov
QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov