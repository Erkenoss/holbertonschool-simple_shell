#include "main.h"

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
	if (strcmp(tokens[0], "exit") == 0 && tokens[1] == NULL)
	{
		free(tokens[0]);
		exit(0);
	}

	if (strchr(tokens[0], '/') == NULL)
	{
		tokens[0] = _getpath(tokens[0]);
		executable(tokens);
		free(tokens[0]);
	}
	else
	{
		executable(tokens);
	}
}
