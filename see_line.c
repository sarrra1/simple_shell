#include"shell.h"

/**
 * see_line - Reads a line of input from the user
 * Return: A pointer to the input line
 */
char *see_line(void)
{
char *tto = NULL;
size_t mmo = 0;
ssize_t nno;

/*cheack the STDIN_FILENO*/

if (isatty(STDIN_FILENO))
write(STDOUT_FILENO, "$", 2);

nno = getline(&tto, &mmo, stdin);

if (nno == -1)
{
free(tto);
return (NULL);
}

return (tto);
}
