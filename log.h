/* Log functions */
#ifndef SMCROUTE_LOG_H_
#define SMCROUTE_LOG_H_

#include <syslog.h>

#define LOG_INIT 10

extern int  log_level;
extern char log_message[128];

int loglvl(const char *level);
void smclog(int severity, const char *fmt, ...);

#endif /* SMCROUTE_LOG_H_ */
