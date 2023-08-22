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
	char *path_cmd = NULL;
	char **tokens = NULL;
	char *tmp_cmd = NULL;
	int i = 0;

	while (1)
	{
		printf("$ ");
		read = getline(&input, &len_input, stdin);
		printf("input %s %ld\n", input, strlen(input));
		if (read == -1)
		{
			printf("vide\n");
			free(input);
			exit(EXIT_FAILURE);
		}
		if (read > 0 && input[read - 1] == '\n')
		{
			input[read - 1] = '\0';
		}
		tokens = token_input(input);
		printf("tokens[0] %s %ld\n", tokens[0], strlen(tokens[0]));

		path_cmd = malloc(strlen(tokens[0]) + 1);

		strcpy(path_cmd, tokens[0]);
		printf("path_cmd %s %ld\n", path_cmd, strlen(path_cmd));
	
		if (strchr(path_cmd, '/') == NULL)
		{
			tmp_cmd = _getpath(tokens[0], _getenv("PATH"));
			printf("coucou, strlen:%ld \n", strlen(path_cmd));
			path_cmd = realloc(path_cmd, strlen(tmp_cmd) + 1);
			printf("coucou2, strlen:%ld \n", strlen(path_cmd));
			strcpy(path_cmd, tmp_cmd);
			printf("path_cmd %s %ld\n", path_cmd, strlen(path_cmd));
			free(tmp_cmd);
		}

		executable(path_cmd, tokens);
		
		i = 0;
		while (tokens[i] != NULL)
		{
			free(tokens[i]);
			i++;
		}
		free(tokens);
		free(path_cmd);
	}
	free(input);
	return (0);
}
