#include "main.h"

/**
 * executable - Execute a file if it has executable permissions
 * @path_file: Path to the executable file
 */
void executable(char *path_file, char **argv)
{
	int status;
	pid_t child;

	if (access(path_file, X_OK) != 0)
	{
		perror("file not found");
		exit(EXIT_FAILURE);
	}
	child = fork();

	if (child == -1)
	{
		perror("Fail Fork\n");
		exit(EXIT_FAILURE);
	}
	else if (child == 0)
	{
		execve(path_file, argv, NULL);
		exit(EXIT_SUCCESS);
	}
	else
	{
		wait(&status);
	}
}
