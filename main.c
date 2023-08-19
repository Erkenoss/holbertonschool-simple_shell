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
	/*int nbr_words;*/

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
		/*token_input(input, &nbr_words);*/
		input_copy = strdup(input);
		executable(input_copy);
		free(input_copy);
	}

	free(input);
	return (0);

}
