#ifndef MAIN_H
#define MAIN_H

#define WORDS 4096

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

char **token_input(char *input);
void executable(char *path_file, char *argv[]);
char *_getenv(const char *name);
char *_getpath(char *cmd, char *path);

#endif
