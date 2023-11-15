#include"shell.h"

/**
 * array_freedom - Frees memory allocated for a string array
 * @sarrad: The string array to free
 * Return: None
 */

void array_freedom(char **sarrad)
{
int i;
if (!sarad)
return;
for (i = 0; sarrad[i]; i++)
{
free(sarrad[i]);
arr[i] = NULL;
}
free(sarrad), sarrad = NULL;
}

