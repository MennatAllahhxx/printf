#include "main.h"
/**
 * _binary - a fun
 * @x: op
 * Return: legnth
 */
int _binary(va_list x)
{
int flag = 0;
int length = 0;
int i, j = 1, k;
unsigned int number = va_arg(x, unsigned int);
unsigned int ptr;
for (i = 0; i < 32; i++)
{
ptr = ((j << (31 - i)) & number);
if (ptr >> (31 - i))
flag = 1;
if (flag)
{
k = ptr >> (31 - i);
_putchar(k + 48);
length++;
}
}
if (length == 0)
{
length++;
_putchar('0');
}
return (length);
}
