#include"shell.h"

/**
 * function_error - Prints an error message for a command not found
 * @type: The type of the error (e.g., "command")
 * @dmma: The name of the command or argument causing the error
 * @shel: Shell configuration flag
 * Return: None
 */
void function_error(char *type, char *dmma, int shel)
{
char *numb, word[] = ": not found\n";
numb = MY_itoa(shel);
/*this my function_error*/
write(STDERR_FILENO, type, strin_len(type));
write(STDERR_FILENO, ": ", 2);
write(STDERR_FILENO, numb, strin_len(numb));
write(STDERR_FILENO, ": ", 2);
write(STDERR_FILENO, dmma, strin_len(dmma));
write(STDERR_FILENO, word, strin_len(word));

free(numb);
}
/**
 * change_sttr - Changes the order of characters in a string
 * @string_dan: The string to modify
 * @leng: The length of the string
 * Return: None
 */

void change_sttr(char *string_dan, int leng)
{
char eye;
int begin = 0;
int last = leng - 1;
/*this my change_sttr*/
while (begin < last)
{
eye = string_dan[begin];
string_dan[begin] = string_dan[last];
string_dan[last] = eye;
begin++;
last--;
}
}

