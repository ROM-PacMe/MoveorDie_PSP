#ifndef HOME_H
#define HOME_H

#include <pspkernel.h>
#include <pspdebug.h>

int exit_callback(int arg1, int arg2, void *common);

int CallbackThread(SceSize args, void *argp);

int SetupCallbacks(void);

#endif
