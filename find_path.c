#include "shell.h"
/**
 * find_path - finds path
 * @filename: file name
 * @tmp: saves the PATH string
 * @er: an error message
 * Return: Success - path/filename, failure - er
 * **/

char *find_path(char *filename, char *tmp, char *er)
{
	DIR *dir;
	struct dirent *sd;
	char *file_path, *path, *ret;
	int len = 0;

	while (filename[len])
}
