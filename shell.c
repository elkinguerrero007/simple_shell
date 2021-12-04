#include "shell.h"

void shell(int ac, char **av, char **env)

  char *tmp = NULL;
  char *line;
  char **args;
  char *er;
  char *filename;
  int flow;


  er = "Error";
  do {
		prompt();
		line = _getline();
                args = split_line(line);
                flow = bridge(args[0], args);
		if (flow == 2)
