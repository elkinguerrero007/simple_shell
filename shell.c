#include "shell.h"
/**
 * shell - Infinite loop that runs shell
 * @ac: Arg count
 * @av: args passed to shell at beginning of prog
 * @env: Environment
 * Return: Void
 * **/

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
		{
			filename = args[0];
			args[0] = find_path(args[0], tmp, er);
			if (args[0] == er)
			{
				args[0] = search_cwd(filename, er);
				if (args[0] == filename)
					write(1, er, 5);
			}
		}
		if (args[0] != er)

