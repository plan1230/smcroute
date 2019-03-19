#ifndef SMCROUTE_CONF_H_
#define SMCROUTE_CONF_H_

#include "config.h"

extern int conf_vrfy;

#ifdef ENABLE_DOTCONF
int     conf_read(char *file, int do_vifs);
#else
#define conf_read(file, do_vifs)
#endif

#endif /* SMCROUTE_CONF_H_ */

/**
 * Local Variables:
 *  indent-tabs-mode: t
 *  c-file-style: "linux"
 * End:
 */
