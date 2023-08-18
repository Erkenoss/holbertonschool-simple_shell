#include "main.h"

void executable(char *path_file)
{
	char *argv[WORDS] = {NULL};
	pid_t child;

	child = fork();
	argv[0] = path_file;

	if (child == - 1)
	{
		perror("Fail Fork\n");
	}
	else if (child == 0)
	{
		if (access(path_file, X_OK) == 0)
		{
			execve(path_file, argv, NULL);
		}
		else
		{
			perror("File not found");
		}
	}
	else
	{
		wait(NULL);
	}

}
