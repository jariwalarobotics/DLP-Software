#-------------------------------------------------
#
# Project created by QtCreator 2018-06-25T15:42:47
#
#-------------------------------------------------

QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DLPJgroup
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    waveformwindow.cpp \
    HiresLib/API.c \
    HiresLib/batchfile.c \
    HiresLib/BMPParser.c \
    HiresLib/compress.c \
    HiresLib/Error.c \
    HiresLib/firmware.c \
    HiresLib/flashimage.c \
    HiresLib/flashloader.c \
    HiresLib/pattern.c \
    HiresLib/splash.c \
    HiresLib/usb.c \
    patternmode.cpp \
    leddriver.cpp \
    machinecontrol.cpp \
    slcfilecontrol.cpp

HEADERS += \
        mainwindow.h \
    waveformwindow.h \
    HiresLib/API.h \
    HiresLib/batchfile.h \
    HiresLib/BMPParser.h \
    HiresLib/common.h \
    HiresLib/compress.h \
    HiresLib/Error.h \
    HiresLib/firmware.h \
    HiresLib/flashimage.h \
    HiresLib/flashloader.h \
    HiresLib/pattern.h \
    HiresLib/splash.h \
    HiresLib/usb.h \
    patternelement.h \
    ptnImage.h \
    version.h \
    definitions.h

INCLUDEPATH += "hidapi-master\\hidapi"
INCLUDEPATH += "HiresLib"

FORMS += \
        mainwindow.ui

win32:CONFIG(release, debug|release): LIBS += -L'C:/Texas Instruments-DLP/DLPC900REF-SW-3.0.0/DLPC900REF-GUI/Sources/GUI/hidapi-master/windows/release/' -lhidapi
else:win32:CONFIG(debug, debug|release): LIBS += -L'C:/Texas Instruments-DLP/DLPC900REF-SW-3.0.0/DLPC900REF-GUI/Sources/GUI/hidapi-master/windows/debug/' -lhidapi
else:unix: LIBS += -L'C:/Texas Instruments-DLP/DLPC900REF-SW-3.0.0/DLPC900REF-GUI/Sources/GUI/hidapi-master/windows/' -lhidapi

INCLUDEPATH += 'C:/Texas Instruments-DLP/DLPC900REF-SW-3.0.0/DLPC900REF-GUI/Sources/GUI/hidapi-master'
DEPENDPATH += 'C:/Texas Instruments-DLP/DLPC900REF-SW-3.0.0/DLPC900REF-GUI/Sources/GUI/hidapi-master'

unix|win32: LIBS += -lhidapi

RESOURCES += \
    hires.qrc
