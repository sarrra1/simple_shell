#include"shell.h"

/**
 * shell_built - Checks if a command is a shell built-in
 * @line: The command to check
 *
 * * Return: 1 if the command is a shell built-in, 0 otherwise
 */

int shell_built(char *line)
{
char *simple[] = {
"exit", "env", "setenv", "cd", NULL};
int i;
for (i = 0; simple[i]; i++)
{
if (strin_cmp(line, simple[i]) == 0)
return (1);
}
return (0);
}
/**
 * make_built - Executes a shell built-in command
 * @line: The command to execute
 * @argv: The command arguments
 * @updata: Pointer to an update flag
 * @shel: Shell configuration flag
 * Return: None
 */

void make_built(char **line, char **argv, int *updata, int shel)
{
/* using if elseif built*/
if (strin_cmp(line[0], "exit") == 0)
fun_exit(line, argv, updata, shel);
/*make_enir = print the envir*/
else if (strin_cmp(line[0], "env") == 0)
make_envir(line, updata);
}
/**
 * fun_shell - Handles the 'exit' built-in command
 * @line: The command line arguments
 * @argv: The command arguments
 * @updata: Pointer to an update flag
 * @shel: Shell configuration flag
 * Return: None
 */

void fun_exit(char **line, char **argv, int *updata, int shel)
{
int shell_exit = (*updata);
char *idx, word[] = ": Exit :Illeggal number : ";
if (line[1])
{
if (check_positive_numb(line[1]))
{
shell_exit = MY_atoi(line[1]);
}
else
{
idx = MY_itoa(shel);
write(STDOUT_FILENO, argv[0], strin_len(argv[0]));
write(STDOUT_FILENO, ":", 2);
write(STDOUT_FILENO, idx, strin_len(idx));
write(STDOUT_FILENO, word, strin_len(word));
write(STDOUT_FILENO, line[1], strin_len(line[1]));
write(STDOUT_FILENO, "\n", 1);
free(idx);
array_freedom(line);
(*updata) = 2;
return;
}
}
array_freedom(line);
exit(shell_exit);
}
/**
 * make_envir - Handles the 'env' built-in command
 * @line: The command line arguments
 * @updata: Pointer to an update flag
 * Return: None
 */
void make_envir(char **line, int *updata)
{
int i;
for (i = 0; environ[i]; i++)
{
write(STDOUT_FILENO, environ[i], strin_len(environ[i]));
}
array_freedom(line);
(*updata) = 0;
}
