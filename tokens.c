#include "main.h"

void token_input(char *input, char *tokens[], int *nbr_words)
{
	char *split;

	if (input == NULL)
		printf("\n");

	split = strtok(input, " ");
	*nbr_words = 0;
	/* stock les tokens ds tokens[]*/
	while (split != NULL && *nbr_words < WORDS)
	{
		tokens[*nbr_words] = split;
		(*nbr_words)++;
		split = strtok(NULL, " ");
	}
}
