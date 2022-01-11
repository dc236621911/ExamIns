#include "dialog.h"

#include <QApplication>
#include <QFile>

#include "windows.h"
#include "winbase.h"
#include "winnt.h"

#include "Mylog/mylog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //禁止系统进入休眠
    SetThreadExecutionState(ES_CONTINUOUS | ES_SYSTEM_REQUIRED | ES_DISPLAY_REQUIRED);
    //全局字体
    QFont f("微软雅黑",10);
    a.setFont(f);

    configRootLogger(QCoreApplication::applicationDirPath()); //配置logger
    logStartup();   //开始logger记录

    Dialog w;
    w.show();

    int ret = a.exec();

    logShutdown();  //关闭logger记录
    return ret;
}
