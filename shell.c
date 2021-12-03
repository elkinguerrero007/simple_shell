#include "shell.h"

void shell(int ac, char **av, char **env)

  char *tmp = NULL;
  char *line;
  char *er;
  char *filename;
  do {
		prompt();
		line = _getline();
