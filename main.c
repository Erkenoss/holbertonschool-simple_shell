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
	ssize_t read = 0;

	while (1)
	{
		printf("$ ");
		read = getline(&input, &len_input, stdin);
		if (read == -1)
		{
			free(input);
			printf("\n");
			exit(EXIT_FAILURE);
		}
		if (read > 0 && input[read - 1] == '\n')
		{
    		input[read - 1] = '\0';
		}
		token_input(input);
	}
	free(input);
	return (0);
}
