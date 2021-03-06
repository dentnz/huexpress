#ifndef _INCLUDE_CONFIG_H
#define _INCLUDE_CONFIG_H

#include "pce.h"
#include "debug.h"

#include "interf.h"


#define SETTINGS_FILENAME "huexpress.cfg"

#if defined(SDL)

// #include "osd_machine_sdl.h"

#else // not SDL

// #include "osd_machine.h"

#endif

int init_config();

void set_config_file (const char *filename);
void set_config_file_back (void);

void get_config_string(char *section, char *keyword, char *default_value,
	char* result);
int get_config_int(char *section, char *keyword, int default_value);

void parse_INIfile();
/* check the configuration file for options
   also make some global initialisations */

int parse_commandline(int argc, char** argv);
/* check the command line for options */

extern uchar joy_mapping[5][16];

extern int32 smode,vmode;

extern char cdsystem_path[PATH_MAX];

#endif
