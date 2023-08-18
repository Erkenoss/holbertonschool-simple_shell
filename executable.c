#include "main.h"

void executable(const char *path_file)
{
	char *const argv[] = {(char *)path_file, NULL};

	pid_t child = fork();

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
