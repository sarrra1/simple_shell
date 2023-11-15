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
struct stat st;
/*Iterate through the input command string*/
for (i = 0; sara_cmd[i]; i++)
{/*Check if there's a slash (/) in the command*/
if (sara_cmd[i] == '/')
{
if (stat(sara_cmd, &st) == 0)
return (strin_dup(sara_cmd));
/*Return a duplicated string of the command*/
return (NULL);
}
} /*Get the value of the PATH environment variable*/
env_path = envir_get("PATH");
if (!env_path)
	return (NULL);
sys = strtok(env_path, ":");
while (sys)
{
comp_dan = malloc(strin_len(sys) + strin_len(sara_cmd) + 2);
if (comp_dan)
{
strin_cpy(comp_dan, sys);/*Copy the path to the combined string*/
strin_cat(comp_dan, "/");/*Append a slash (/) to the combined string*/
strin_cat(comp_dan, sara_cmd);/*Append thecommand to combined strin*/
if (stat(comp_dan, &st) == 0)/*Check if the combined path and file*/
{
free(env_path);
return (comp_dan);
}
free(comp_dan), comp_dan = NULL;
sys = strtok(NULL, ":");
}
}
free(env_path);
return (NULL);/*NULL if the command is not found*/
}
