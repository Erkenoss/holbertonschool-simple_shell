#include "main.h"

void token_input(const char *input, int *nbr_words)
{
	char *tokens[WORDS];
	char *copy_input;
	char *split;

	if (input == NULL)
		printf("\n");

	copy_input = strdup(input);
	split = strtok(copy_input, " ");
	*nbr_words = 0;

	while (split != NULL && *nbr_words < WORDS)
	{
		tokens[*nbr_words] = split;
		printf("token: %s\n", tokens[*nbr_words]);
		(*nbr_words)++;
		split = strtok(NULL, " ");
	}
}
