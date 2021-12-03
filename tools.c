#include "shell.h"
/**
 * _getline - gets line of user input
 * Return: pointer to buffer
 * **/

char *_getline(void)
{
	int temp;
	char *line = NULL;
	size_t size = 0;

	temp = getline(&line, &size, stdin);
	if (temp == EOF)
	{
		if (isatty(STDIN_FILENO))
			write(1, "\n", 1);
		exit(0);
	}
	return (line);
}
