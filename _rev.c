#include "main.h"
/**
 * _rev - a fun
 * @x: op
 * Return: length
 */
int _rev(va_list x)
{
char *str = va_arg(x, char*);
int length = 0;
int i;
if (str == NULL)
{
str = "(null)";
}
while (str[length] != '\0')
{
length++;
}
for (i = length - 1; i >= 0; i--)
{
_putchar(str[i]);
}
return (length);
}
