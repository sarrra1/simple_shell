#include"shell.h"

/**
 * MY_itoa - Converts an integer to a string
 * @n: The integer to convert
 *
 * Return: A dynamically allocated string representing the converted integer
 */

char *MY_itoa(int n)
{
char sar_buf[20];
int i = 0;
/*this my functin my_itoa*/
if (n == 0)
sar_buf[i++] = '0';

else
{
while (n > 0)
{
sar_buf[i++] = (n % 10) + '0';
n /= 10;
}
}
/*MY_itoa - Converts an integer to a string*/
sar_buf[i] = '\0';
change_sttr(sar_buf, i);
return (strin_dup(sar_buf));
}

