#include "main.h"
/**
 * _string - a fun
 * @x: arg
 * Return: length
 */
int _string(va_list x)
{
char *str;
int index, length;
str = va_arg(x, char *);
if (str == NULL)
{
str = "(null)";
length = _strlen(str);
for (index = 0; index < length; index++)
_putchar(str[index]);
return (length);
}
else
{
length = _strlen(str);
for (index = 0; index < length; index++)
_putchar(str[index]);
return (length);
}
}
