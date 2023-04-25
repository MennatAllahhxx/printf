#include "main.h"
/**
 * _unsigned - fun
 * @x: argument to print
 * Return: i
 */
int _unsigned(va_list x)
{
unsigned int k = va_arg(x, unsigned int);
int num = k, last_digit, digit, j = 1;
int  i = 0;

if (k >= INT_MAX)
{
_putchar('-');
num = -(int)k;
i++;
}
last_digit = num % 10;
num /= 10;
while (num > 0)
{
j *= 10;
num /= 10;
}
num = k;
while (j > 0)
{
digit = num / j;
_putchar(digit + '0');
num %= j;
j /= 10;
i++;
}
_putchar(last_digit + '0');
i++;
return (i);
}
