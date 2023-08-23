#include "main.h"
/**
 * path_command - function that finds the path to execute command
 * @command: command
 *
 * Return: Nothing.
 */

char *_getpath(char *command)
{
	int i = 0;
	char *token = NULL;
	char *cache;
	char *result = NULL;

	while (environ[i])
	{
		cache = strdup(environ[i]);
		token = strtok(cache, "=");

		if (strcmp(token, "PATH") == 0)
		{
			token = strtok(NULL, "=");
			token = strtok(token, ":");

			while (token)
			{

				result = malloc(strlen(token) + strlen(command) + 2);
				if (result ==  NULL)
				{
					perror("Malloc is NULL");
					return (NULL);
				}
				sprintf(result, "%s/%s", token, command);
				if (access(result, X_OK) == 0)
				{
					printf("free cache and return result\n");
					free(cache);
					return (result);
				}
				printf("free result\n");
				free(result);
				token = strtok(NULL, ":");
			}
		}
		printf("free cache\n");
		free(cache);
		i++;
	}
	return (command);
}
