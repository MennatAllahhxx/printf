#include "holberton.h"
/**
 * _rot13 - a fun
 * @x: op
 * Return: length
 */
int _rot13(va_list x)
{
int i, j, length = 0;
int k = 0;
char *str = va_arg(x, char*);
char abc[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
char def[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};
if (str == NULL)
{
str = "(null)";
}
for (i = 0; str[i]; i++)
{
k = 0;
for (j = 0; abc[j] && !k; j++)
{
if (str[i] == abc[j])
{
_putchar(def[j]);
length++;
k = 1;
}
}
if (!k)
{
_putchar(str[i]);
length++;
}
}
return (length);
}
