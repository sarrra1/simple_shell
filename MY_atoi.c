#include"shell.h"

/**
 * MY_atoi - Converts a string to an integer
 * @string_dan: The string to convert
 *
 * Return: The converted integer value
 */

int MY_atoi(char *string_dan)
{/*Initialize variables for iteration and storing the converted number*/
int i, number = 0;
for (i = 0; string_dan[i]; i++)
{/*Iterate through each character of the input string*/
number *= 10;
number += (string_dan[i] - '0');
} /*Return the converted integer value*/
return (number);
}
