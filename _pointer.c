#include "main.h"
/**
 * _pointer - a fun
 * @x: op
 * Return: sth
 */
int _pointer(va_list x)
{
char *str = "(nil)";
void *ptr;
unsigned long int k;
int j;
int i;
ptr = va_arg(x, void*);
if (ptr == NULL)
{
for (i = 0; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
return (i);
}
k = (unsigned long int)pointer;
_putchar('0');
_putchar('x');
j = _hex_aux(k);
return (k + 2);
}
