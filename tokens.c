#include "main.h"

/**
* token_input - tokenize the input
*
* @input: the stdin put by input
*
* Return: No return, void function
*/

void token_input(char *input)
{
	char *split = NULL;
	char *tokens[1024] = { NULL };
	int index = 0;

	split = strtok(input, " ");
	while (split)
	{
		if (strlen(split) > 0)
		{
			tokens[index] = split;
			index += 1;
		}
		split = strtok(NULL, " ");
	}
	if (tokens[0] == NULL)
	{
		return;
	}
	if (strcmp(tokens[0], "env") == 0)
	{
		print_env();
		return;
	}
	if (strcmp(tokens[0], "exit") == 0)
	{
		free(tokens[0]);
		exit(0);
	}
	split = strdup(tokens[0]);
	tokens[0] = _getpath(tokens[0]);
	if (tokens[0] != NULL)
	{
		free(split);
		executable(tokens);
		free(tokens[0]);
		return;
	}
	fprintf(stderr, "./hsh: 1: %s: TOTO not found\n", split);
	free(split);
	exit(127);
}
