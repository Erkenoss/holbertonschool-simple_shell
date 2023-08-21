#include "main.h"

char **token_input(char *input)
{
	char *split;
	char **tokens = NULL;
	int index = 0;
	
	tokens = malloc(sizeof(char) * strlen(input) + 1);

	if (input == NULL)
		printf("\n");

	split = strtok(input, " ");
	while (split != NULL)
	{
		tokens[index] = strdup(split);
		index++;
		split = strtok(NULL, " ");
	}
	tokens[index] = NULL;

	return (tokens);
}
