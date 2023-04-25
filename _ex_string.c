#include "holberton.h"
/**
 * _ex_string - a fun
 * @x: op
 * Return: length
 */
int _ex_string(va_list x)
{
char *str;
int i, length = 0;
int j;
str = va_arg(x, char *);
if (str == NULL)
{
string = "(null)";
}
for (i = 0; string[i] != '\0'; i++)
{
if (str[i] < 32 || str[i] >= 127)
{
_putchar('\\');
_putchar('x');
length = length + 2;
j = str[i];
if (j < 16)
{
_putchar('0');
length++;
}
length = length + _HEX_aux(j);
}
else
{
_putchar(str[i]);
length++;
}
}
return (length);
}
