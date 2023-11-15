#include"shell.h"

/**
 * execu__te - Executes a commmmand with arguments.
 * @sar_cmd: The command andf arguments to execute.
 * @argv: The program's argumentts.
 * @shel: Flag indicating if thhe shell is interactive.
 * Return: The exit status of the executed command.
 */
int execu__te(char **sar_cmd, char **argv, int shel)
{
char *comp_sara;
pid_t child;/*define chile*/
int updata;
comp_sara = path_get(sar_cmd[0]);
if (!comp_sara)
{/*chek if it is Null*/
function_error(argv[0], sar_cmd[0], shel);
array_freedom(sar_cmd);
return (127);
}
child = fork();/*using forl()*/
if (child == 0)/*check if it has index 0*/
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
{/*let process parent to wait*/
waitpid(child, &updata, 0);
array_freedom(sar_cmd);
free(comp_sara), comp_sara = NULL;
}/*now exit with status*/
return (WEXITSTATUS(updata));
}
