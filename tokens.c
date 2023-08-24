#include "main.h"

void token_input(char *input)
{
	char *split = NULL;
	char *tokens[1024] = { NULL };
	int index = 0;
	char *final_path = NULL;

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
	if (strchr(tokens[0], '/') == NULL)
	{
		final_path = _getpath(tokens[0]);
		if(final_path != NULL)
		{
			tokens[0] = strdup(final_path);
			executable(tokens);
			free(tokens[0]);
		}
	}
	else
	{
		executable(tokens);
	}
}
