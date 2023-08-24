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
		if (isatty(STDIN_FILENO))
		{
			printf("$ ");
			fflush(stdout);
		}

		read = getline(&input, &len_input, stdin);
		if (read == EOF)
		{
			free(input);
			exit(0);
		}
		if (read > 0 && input[read - 1] == '\n') 
		{
			input[read - 1] = '\0';
		}
		if (strlen(input) == strlen("exit") && strcmp(input, "exit") == 0)
		{
            free(input);
            exit(0);
        }
		if (strlen(input) > strlen("exit") && strstr(input, "exit") == NULL)
		{
            free(input);
            exit(2);
        }
		token_input(input);
	}
	free(input);
	return (0);
}
