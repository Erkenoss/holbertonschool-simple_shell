#include "main.h"

void token_input(char *input, char *tokens[])
{
	char *split;
	int index = 0;

	if (input == NULL)
		printf("\n");

	split = strtok(input, " ");
	while (split != NULL)
	{
		tokens[index] = split;
		index++;
		split = strtok(NULL, " ");
	}
}
