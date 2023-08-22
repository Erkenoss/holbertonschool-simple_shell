#include "main.h"

char *_getenv(const char *name)
{
	int i = 0;
	char *entry = NULL;
	char *variable = NULL;
	char *value = NULL;

	for (i = 0; environ[i] != NULL; i++)
	{
		entry = strdup(environ[i]);
		variable = strtok(entry, "=");

		if (variable != NULL && strcmp(variable, name) == 0)
		{
			value = strtok(NULL, "");
		}
		free(entry);
	}
	return (value);
}
