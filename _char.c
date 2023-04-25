#include "main.h"
/**
 * _char - a fun
 * @x: op
 * Return: 1 if success
 */
int _char(va_list x)
{
char c;
c = va_arg(x, int);
_putchar(c);
return (1);
}
