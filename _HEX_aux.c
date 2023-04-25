#include "main.h"
/**
 * _HEX_aux- a fun
 * @number: op
 * Return: length
 */
int _HEX_aux(unsigned int number)
{
int i;
int *arr;
int length = 0;
unsigned int j = number;
while (number / 16 != 0)
{
number /= 16;
length++;
}
length++;
arr = malloc(sizeof(int) * length);
for (i = 0; i < length; i++)
{
arr[i] = j % 16;
j /= 16;
}
for (i = length - 1; i >= 0; i--)
{
if (arr[i] > 9)
arr[i] += 39;
_putchar(arr[i] + '0');
}
free(arr);
return (length);
}
