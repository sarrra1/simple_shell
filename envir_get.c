#include"shell.h"

/**
 * envir_get - Retrieves the value of an environment variable
 * @svar: The name of the environment variable to retrieve
 * * Return: A pointer to the value of the environment variable
 */

char *envir_get(char *svar)
{

char *ect, *open, *mount, *sara_env;
int i;

for (i = 0; environ[i]; i++)
{
ect = strin_dup(environ[i]);
/*this is my function envir_get*/
open = strtok(ect, "=");

if (strin_cmp(open, svar) == 0)
{
mount = strtok(NULL, "\n");
sara_env = strin_dup(mount);
free(ect);

return (sara_env);
}
free(ect), ect = NULL;
/*Retrieves the value of an environment variable*/
}
return (NULL);
}

