#include "main.h"

/**
 * _getpath - search the godd path in PATH
 *
 * @path: path to cmp
 * @cmd: path or cmd give in output
 *
 * Return: the good path in PATH
 */

char *_getpath(char *cmd, char *path)
{
	char *dir = NULL;
	char *good_path = NULL;
	char *final_path = NULL;

	dir = strtok(path, ":");

	while (dir != NULL)
	{
		good_path = malloc(strlen(dir) + strlen(cmd) + 2);	
		if (good_path == NULL)
		{
			perror("Malloc is NULL");
			return (NULL);
		}

		sprintf(good_path, "%s/%s", dir, cmd);
		printf("Checking path: %s\n", good_path);

		if (access(good_path, X_OK) == 0)
		{
			final_path = malloc(strlen(good_path) + 1);	
			strcpy(final_path, good_path);
			printf("%s---%s\n", final_path, good_path);
			free(good_path);
			return (final_path);
		}
		free(good_path);
		dir = strtok(NULL, ":");
	}
	return (NULL);	
}
