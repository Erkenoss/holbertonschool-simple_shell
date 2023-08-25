#include "main.h"

/*
* print_env - print environ
*
* Return: no return, void function
*/

void print_env(void)
{
	char **env;

	for (env = environ; *env != NULL; env++)
	{
		printf("%s\n", *env);
	}
}
