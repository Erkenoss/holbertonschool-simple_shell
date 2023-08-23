#include "main.h"

/**
 * executable - Execute a file if it has executable permissions
 * @path_file: Path to the executable file
 */
void executable(char *argv[])
{
	int status;
	pid_t child;

	if (access(argv[0], X_OK) != 0)
	{
		perror("file not found");
		return;
	}
	child = fork();

	if (child == -1)
	{
		perror("Fail Fork\n");
		exit(EXIT_FAILURE);
	}
	else if (child == 0)
	{
		execve(argv[0], argv, NULL);
		exit(0);
	}
	else
	{
		wait(&status);
	}
}
