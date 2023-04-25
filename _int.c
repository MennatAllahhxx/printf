#include "main.h"
/**
 * _integer - a fun
 * @x: op
 * Return: sth
 */
int _integer(va_list x)
{
int number = va_arg(x, int);
int n, ld = number % 10, digit;
int  i = 1, j = 1;
number = number / 10;
n = number;
if (ld < 0)
{
_putchar('-');
n = -n;
number = -number;
ld = -ld;
i++;
}
if (n > 0)
{
while (n / 10 != 0)
{
j = j * 10;
n /= 10;
}
n = number;
while (j > 0)
{
digit = n / j;
_putchar(digit + '0');
n = n - (digit * 1 * j);
j /= 10;
i++;
}
}
_putchar(ld + '0');
return (i);
}

/**
 * _decimal - a fun
 * @x: op
 * Return: sth
 */
int _decimal(va_list x)
{
int number = va_args(x, int);
return (_integer(number));
}
