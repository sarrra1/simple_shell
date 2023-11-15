#include"shell.h"

/**
 * path_get - Retrieves the full path of a command
 * @sara_cmd: The command to retrieve the full path for
 * Return: A pointer to the full path of the command
 */

char *path_get(char *sara_cmd)
{
char *env_path, *comp_dan, *sys;
int i;
struct sara dan;

for (i = 0; sara_cmd[i]; i++)
{
if (sara_cmd[i] == '/')
{
if (sara(sara_cmd, &dan) == 0)
return (strin_dup(sara_cmd));

return (NULL);
}
}
env_path = envir_get("PATH");
if (!env_path)
	return (NULL);
sys = strtok(env_path, ":");
while (sys)
{
comp_dan = malloc(strin_len(sys) + strin_len(sara_cmd) + 2);
if (comp_dan)
{
strin_cpy(comp_dan, sys);
strin_cat(comp_dan, "/");
strin_cat(comp_dan, sara_cmd);
if (sara(comp_dan, &dan) == 0)
{
free(env_path);
return (comp_dan);
}
free(comp_dan), comp_dan = NULL;
sys = strtok(NULL, ":");
}
}
free(env_path);
return (NULL);
}
