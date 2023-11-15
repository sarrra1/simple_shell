#include"shell.h"

/**
 * execu__te - Executes a command with arguments
 * @sar_cmd: The command and arguments to execute
 * @argv: The program's arguments
 * @shel: Flag indicating if the shell is interactive
 * Return: The exit status of the executed command
 */
int execu__te(char **sar_cmd, char **argv, int shel)
{
char *comp_sara;
pid_t child;
int updata;
comp_sara=path_get(sar_cmd[0]);
if (!comp_sara)
{
function_error(argv[0], sar_cmd[0], shel);
array_freedom(sar_cmd);
return (127);
}

child = fork();
if (child == 0)
{
if (execve(sar_cmd[0], sar_cmd, environ) == -1)
{
free(comp_sara), comp_sara = NULL;
/*perror(argv[0]);*/
array_freedom(sar_cmd);
/*exit(0);*/
}
}
else
{
waitpid(child, &updata, 0);

array_freedom(sar_cmd);
free(comp_sara), comp_sara = NULL;
    }
    return (WEXITSTATUS(updata));
}
