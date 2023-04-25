#include "main.h"
/**
 * _oct - a fun
 * @x: op
 * Return: length
 */
int _oct(va_list x)
{
int i;
int *arr;
int length = 0;
unsigned int j = va_arg(x, unsigned int);
unsigned int k = j;
while (j / 8 != 0)
{
j /= 8;
length++;
}
length++;
arr = malloc(sizeof(int) * length);
for (i = 0; i < length; i++)
{
arr[i] = k % 8;
k /= 8;
}
for (i = length - 1; i >= 0; i--)
{
_putchar(arr[i] + '0');
}
free(arr);
return (length);
}
