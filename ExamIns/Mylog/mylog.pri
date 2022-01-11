include($$PWD/g++.pri)
include($$PWD/build.pri)

#指定编译源代码添加至项目中
INCLUDEPATH += $$PWD/src

#引入日志库文件
LIBS += -L$$PWD/bin \
        -llog4qt

HEADERS += \
    $$PWD/mylog.h

SOURCES += \
    $$PWD/mylog.cpp

