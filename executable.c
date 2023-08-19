#include "main.h"

/**
 * executable - Execute a file if it has executable permissions
 * @path_file: Path to the executable file
 */
void executable(char *path_file, char *argv[], int *nbr_words)
{
	int status;
	pid_t child;
	int i;
	char *argv_copy[WORDS];
	child = fork();
	argv_copy[0] = path_file;

	if (child == -1)
	{
		perror("Fail Fork\n");
		exit(EXIT_FAILURE);
	}
	else if (child == 0)
	{
		if (access(path_file, X_OK) == 0)
		{
			for (i = 1; i < *nbr_words; i++)
			{
				argv_copy[i] = strdup(argv[i]);
			}
			argv_copy[*nbr_words] = NULL;
			execve(path_file, argv_copy, NULL);
			for (i = 0; i < *nbr_words; i++)
			{
				free(argv_copy[i]);	
			}
			perror("Execve Error");
			exit(EXIT_FAILURE);
		}
		else
		{
			perror("File not found");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		if (wait(&status) == -1)
		{
			perror("WAIT ERROR");
		}
	}
}
