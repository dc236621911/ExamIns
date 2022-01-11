#include "mylog.h"

void logStartup(){
    auto logger = Log4Qt::Logger::rootLogger();

    logger->info(QStringLiteral("################################################################"));
    logger->info(QStringLiteral("                                     LOG   START"));
    logger->info(QStringLiteral("################################################################"));
}
void logShutdown(){
    auto logger = Log4Qt::Logger::rootLogger();

    logger->info(QStringLiteral("################################################################"));
    logger->info(QStringLiteral("                                      LOG  STOP"));
    logger->info(QStringLiteral("################################################################"));

    //清除相关logger变量
    logger->removeAllAppenders();
    logger->loggerRepository()->shutdown();
}
void configRootLogger(QString configPath){
    configPath = configPath + "/log4qt.properties";
    auto rootLogger = Log4Qt::Logger::rootLogger();

    if(QFile::exists(configPath)){
        Log4Qt::PropertyConfigurator::configure(configPath);
    }else{
        // Create a layout
        auto *layout = new Log4Qt::TTCCLayout();
        layout->setName(QStringLiteral("My Layout"));
        layout->setDateFormat("yyyy-MM-dd hh:mm:ss.zzz");
        layout->activateOptions();
        // Create a console appender
        Log4Qt::ConsoleAppender *consoleAppender =
                new Log4Qt::ConsoleAppender(layout, Log4Qt::ConsoleAppender::STDOUT_TARGET);
        consoleAppender->setName(QStringLiteral("My console Appender"));
        consoleAppender->activateOptions();
        rootLogger->addAppender(consoleAppender);
        // Create a daily file appender
        Log4Qt::DailyFileAppender *dailyfileAppender =
                new Log4Qt::DailyFileAppender(layout, "./logs/examIns.log", "yyyy-MM-dd");//true for append
        dailyfileAppender->activateOptions();
        rootLogger->addAppender(dailyfileAppender);
        //设置根logger允许所以等级的消息被输出（子输出过滤是在根输出过滤的基础上）
        rootLogger->setLevel(Log4Qt::Level::ALL_INT);
        Log4Qt::LogManager::setHandleQtMessages(true);//设置监听qt自带的log输出
    }
}
