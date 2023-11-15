#include "shell.h"

/**
 * main - frist ppoint of the program
 * @ac: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: The exit status of the last executed command
 */

int main(int ac, char **argv)
{
char *line = NULL;
char **shl_comnd = NULL;
int updata = 0, index = 0;
/*int i;*/
(void)ac;
/*infinite loop to continuously read and process commands*/
while (1)
{/*Read a line of input*/
line = see_line();
if (line == NULL)/*Check if line is NULL indicat end of input*/
{/*Check if the input is from a terminal*/
if (isatty(STDIN_FILENO))
write(STDOUT_FILENO, "\n", 1);
return (updata);
}
/*free(line);*/
index++;/*Increment the index counter*/
/*Tokenize the line into shell commands*/
shl_comnd = shell_tok(line);
if (!shl_comnd)
continue;
if (shell_built(shl_comnd[0]))
make_built(shl_comnd, argv, &updata, index);
else/*Execute the external command*/
updata = execu__te(shl_comnd, argv, index);
} /*Continue the loop to process the next command*/
}
