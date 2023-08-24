#include "main.h"


void our_exit(char **tokens)
{
    if (strcmp(tokens[0], "exit") == 0 && tokens[1] == NULL)
	{
		free(tokens[0]);
		exit(0);
	}
}