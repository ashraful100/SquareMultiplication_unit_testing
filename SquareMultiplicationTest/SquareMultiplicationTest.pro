QT += core testlib
QT -= gui

CONFIG += c++11
TARGET = SquareMultiplicationTest
CONFIG += console
CONFIG -= app_bundle
CONFIG += testcase
TEMPLATE = app

SOURCES += main.cpp \
    squaremultiplicationapplicationtest.cpp \
    squaremultiplication.cpp

DEFINES += QT_DEPRECATED_WARNINGS


HEADERS += \
    squaremultiplicationapplicationtest.h \
    squaremultiplication.h

INCLUDEPATH += $$PWD/../SquareMultiplicationLib

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../SquareMultiplicationLib/release/ -lSquareMultiplicationLib
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../SquareMultiplicationLib/debug/ -lSquareMultiplicationLib
