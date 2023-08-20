#include "main.h"

/**
 * _getpath - search the godd path in PATH
 *
 * @path: path to cmp
 * @cmd: path or cmd give in output
 *
 * Return: the good path in PATH
 */

char *_getpath(const char *cmd, const char *path)
{
	char *path_copy;
	char *dir;
	char *good_path;

	path_copy = strdup(path);
	dir = strtok(path_copy, ":");

	while (dir != NULL)
	{
		good_path = malloc(strlen(dir) + strlen(cmd) + 2);
		if (good_path == NULL)
		{
			perror("Malloc is NULL");
			free(path_copy);
			return (NULL);
		}

		strcpy(good_path, dir);
		strcat(good_path, "/");
		strcat(good_path, cmd);

		if (access(good_path, X_OK) == 0)
		{
			free(path_copy);
			return (good_path);
		}
		free(good_path);
		dir = strtok(NULL, ":");
	}
	free(path_copy);
	return (NULL);
	
	
}
