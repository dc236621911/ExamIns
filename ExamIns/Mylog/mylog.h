#ifndef MYLOG_H
#define MYLOG_H

#include "log4qt/logger.h"
#include "log4qt/basicconfigurator.h"
#include "log4qt/propertyconfigurator.h"
#include "log4qt/loggerrepository.h"
#include "log4qt/consoleappender.h"
#include "log4qt/ttcclayout.h"
#include "log4qt/logmanager.h"
#include "log4qt/fileappender.h"
#include "log4qt/dailyfileappender.h"

extern void logStartup();
extern void logShutdown();
extern void configRootLogger(QString configPath);


#endif // MYLOG_H
