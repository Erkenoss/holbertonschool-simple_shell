#include "main.h"

void token_input(char *input)
{
	char *split = NULL;
	char *tokens[1024] = { NULL };
	int index = 0;

	split = strtok(input, " ");
	while (split)
	{
		tokens[index] = split;
		index += 1;
		split = strtok(NULL, " ");
	}

	if (strchr(tokens[0], '/') == NULL)
		tokens[0] = _getpath(tokens[0]);
	executable(tokens);
	if (tokens[0] != NULL)
		free(tokens[0]);
}