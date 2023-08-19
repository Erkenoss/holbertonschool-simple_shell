#include "main.h"

/**
 * main - Entry point
 *
 *
 * Return: 0 to sucess
 */
int main(void)
{
	char *input = NULL;
	size_t len_input = 0;
	ssize_t read;
	char *input_copy;
	char *tokens[WORDS];
	int nbr_words = 0;

	while (1)
	{
		printf("I am the best: ");
		read = getline(&input, &len_input, stdin);
		if (read == -1)
		{
			printf("\n");
			free(input);
			exit(EXIT_FAILURE);
		}
		if (read > 0 && input[read - 1] == '\n')
			input[read - 1] = '\0';
		token_input(input, tokens, &nbr_words);
		input_copy = strdup(input);
		executable(tokens[0], tokens);
		free(input_copy);
	}

	free(input);
	return (0);

}
