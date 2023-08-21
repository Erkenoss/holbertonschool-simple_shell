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
	char *path_cmd;
	char *tokens[WORDS];

	while (1)
	{
		printf("$ ");
		read = getline(&input, &len_input, stdin);
		if (read == -1)
		{
			printf("\n");
			free(input);
			exit(EXIT_FAILURE);
		}
		if (read > 0 && input[read - 1] == '\n')
			input[read - 1] = '\0';
		input_copy = strdup(input);
		token_input(input_copy, tokens);
		path_cmd = tokens[0];
		if (strchr(path_cmd, '/') == NULL)
			path_cmd = _getpath(tokens[0], _getenv("PATH"));
		executable(path_cmd, tokens);
		free(input_copy);
	}
	free(input);
	return (0);
}
