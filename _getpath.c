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
				printf("%s\n", result);
				if (access(result, X_OK) == 0)
				{
					free(cache);
					return (result);
				}
				free(result);
				token = strtok(NULL, ":");
			}
		}
		free(cache);
		i++;
	}
	if (result != NULL)
		free(result);
	return (command);
}