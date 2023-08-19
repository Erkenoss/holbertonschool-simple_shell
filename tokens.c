#include "main.h"

void token_input(const char *input, char *tokens[], int *nbr_words)
{
	char *copy_input;
	char *split;

	if (input == NULL)
		printf("\n");

	copy_input = strdup(input);
	split = strtok(copy_input, " ");
	*nbr_words = 0;
	/* stock les tokens ds tokens[]*/
	while (split != NULL && *nbr_words < WORDS)
	{
		tokens[*nbr_words] = split;
		(*nbr_words)++;
		split = strtok(NULL, " ");
	}
}
