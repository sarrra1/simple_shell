#include"shell.h"

/**
 * see_line - Reads a line of input from the user
 *
 * Return: A pointer to the input line
 */
char *see_line(void)
{
char *tto = NULL;/*Initialize a pointer to hold the input line*/
size_t mmo = 0;
ssize_t nno;
/*Check if input is coming from STDIN_FILENO*/
if (isatty(STDIN_FILENO))
write(STDOUT_FILENO, "$", 2);

nno = getline(&tto, &mmo, stdin);

/*Check if getline encountered an error or reached the end of file*/
if (nno == -1)
{
free(tto);
/*Return the pointer to the input line*/
return (NULL);
}

return (tto);
}
