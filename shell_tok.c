#include"shell.h"

/**
 * shell_tok - Tokenizes a string into an array of strings
 * @cmod: The string to tokenize
 * Return: A pointer to the array of strings
 */

char **shell_tok(char *sara_line)
{
char *sara_tok = NULL, *ect = NULL;
char **sheell = NULL;
int kq = 0, i = 0;
if (!sara_line)
return (NULL);

ect = strin_dup(sara_line);
sara_tok = strtok(ect, DELIM);
if (sara_tok == NULL)
{
free(sara_line), sara_line = NULL;
free(ect), ect = NULL;
return (NULL);
}
while (sara_tok)
{
kq++;
sara_tok = strtok(NULL, DELIM);
}
free(ect), ect = NULL;
sheell = malloc(sizeof(char *) * (kq + 1));

if (!sheell)
{
free(sara_line);
return (NULL);
}
sara_tok = strtok(sara_line, DELIM);
while (sara_tok)
{
sheell[i] = strin_dup(sara_tok);
sara_tok = strtok(NULL, DELIM);
i++;
}
free(sara_line), sara_line = NULL;
sheell[i] = NULL;
return (sheell);
}
