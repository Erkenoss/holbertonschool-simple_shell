#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

void token_input(char *input);
void executable(char **argv);
char *_getenv(const char *name);
char *_getpath(char *cmd);

extern char **environ; /*declare the external 'environ' variable */

#endif
