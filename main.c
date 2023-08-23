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
	int is_interactive = isatty(STDIN_FILENO);
	int is_empty = 1;
	size_t index;

	while (1)
	{
		if (is_interactive)
		{
			printf("$ ");
			fflush(stdout);
		}

		read = getline(&input, &len_input, stdin);
		if (read == -1)
		{
			free(input);
			exit(0);
		}
		if (read > 0 && input[read - 1] == '\n') {
			input[read - 1] = '\0';
		}
		is_empty = 1;
		for (index = 0; index < len_input; index++) 
		{
			if (input[index] != '\0' && input[index] != '\n') 
			{
				is_empty = 0;
				break;
			}
		}
		if (!is_empty)
		token_input(input);
	}
	free(input);
	return (0);
}
