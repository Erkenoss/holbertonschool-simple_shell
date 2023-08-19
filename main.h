#ifndef MAIN_H
#define MAIN_H

#define WORDS 4096

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

void token_input(const char *input, char *tokens[], int *nbr_words);
void executable(char *path_file, char *argv[]);

#endif
