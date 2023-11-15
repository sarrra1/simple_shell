#include "shell.h"

int main(int ac, char **argv)
{
char *line = NULL;
char **shl_comnd = NULL;
int updata = 0, index = 0;
    /*int i;*/
(void)ac;

while (1)
{
line = see_line();
if (line == NULL)
{
if (isatty(STDIN_FILENO))
write(STDOUT_FILENO, "\n", 1);
return (updata);
}
        /*free(line);*/
index++;

shl_comnd= shell_tok(line);
if (!shl_comnd)
continue;
if (shell_built(shl_comnd[0]))
make_built(shl_comnd, argv, &updata, index);
else
            /*for (i=0; command[i]; i++)
            {
                printf("%s\n", command[i]);
                free(command[i]), command[i] = NULL;
             }

             free(command), command = NULL;*/
updata = execu__te(shl_comnd, argv, index);
}
}

