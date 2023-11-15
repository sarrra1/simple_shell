#include"shell.h"

/**
 * strin_dup - Creates a duplicate of a string
 * @soma: The string to be duplicated
 * Return: A pointer to the duplicate string or NULL if the input is NULL
 */

char *strin_dup(const char *soma)
{
char *dot;
int i, loong = 0;
/* using if to test*/
if (soma == NULL)
return (NULL);

while (*soma != '\0')
{
loong++;
soma++;
}

soma = soma - loong;
dot = malloc(sizeof(char) * (loong + 1));
/******/
if (dot == NULL)
return (NULL);

for (i = 0; i <= loong; i++)
dot[i] = soma[i];

return (dot);
}

/*----------------------------------------------------------------------*/

/**
 * strin_cmp - Compares two strings
 * @c1: The first string to be compared
 * @c2: The second string to be compared
 * Return: An integer indicating the difference between the strings
 */

int strin_cmp(char *c1, char *c2)
{
int out;

out = (int)*c1 - (int)*c2;

while (*c1)
{
if (*c1 != *c2)
break;

c1++;
c2++;
out = (int)*c1 - (int)*c2;
}

return (out);
}
/*-------------------------------------------------------*/


/**
 * strin_cpy - Copies a string
 * @skhy: The destination string
 * @hdo: The source string
 * * Return: A pointer to the source string @hd
 */

char *strin_cpy(char *skhy, char *hdo)
{
int i = 0;
while (hdo[i])
{
skhy[i] = hdo[i];
i++;
}
skhy[i] = '\0';
return (skhy);
}

/*-----------------------------------------------------------*/

/**
 * strin_cat - Concatenates two strings
 * @skhy: The destination string
 * @hdoo: The source string
 * Return: A pointer to the destination string @skhy
 */

char *strin_cat(char *skhy, char *hdoo)
{
char *s = skhy;
while (*s)
s++;
/*opss!*/
while (*hdoo)
{
*s = *hdoo;
s++;
hdoo++;
}
*s = '\0';
return (skhy);
}

/*------------------------------------------------------------*/

/**
 * strin_len - Calculates the length of a string
 * @q: The string to calculate the length of
 * * Return: The length of the string
 */

int strin_len(char *q)
{
int loong = 0;

while (q[loong])
loong++;

return (loong);
}
