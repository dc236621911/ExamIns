QT       += core gui multimedia concurrent

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    data.cpp \
    examinfo.cpp \
    main.cpp \
    dialog.cpp \
    showinfo.cpp

HEADERS += \
    data.h \
    dialog.h \
    examinfo.h \
    showinfo.h

FORMS += \
    dialog.ui \
    examinfo.ui \
    showinfo.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


#包含子模块
include($$PWD/GaoKao/gaokao.pri)
include($$PWD/PuTong/putong.pri)
include($$PWD/Sound/sound.pri)
#mylog
include($$PWD/Mylog/mylog.pri)

#包含目录
INCLUDEPATH += \
            $$PWD/GaoKao \
            $$PWD/PuTong \
            $$PWD/Sound \

RESOURCES += \
    ico.qrc
