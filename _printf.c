#include "main.h"
/**
 * _printf - a fun
 * @format: op
 * Return: length
 */
int _printf(const char * const format, ...)
{
convert_match k[] = {
	{"%s", _string}, {"%c", _char},
	{"%%", _percent}, {"%i", _int},
	{"%d", _dec}, {"%r", _rev},
	{"%R", _rot13}, {"%b", _bin},
	{"%u", _unsigned}, {"%o", _oct},
	{"%x", _hex}, {"%X", _HEX},
	{"%S", _ex_string}, {"%p", _pointer}
};
va_list x;
int i = 0, j, length = 0;
va_start(x, format);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
{
return (-1);
}
Here:
while (format[i] != '\0')
{
j = 13;
while (j >= 0)
{
if (k[j].id[0] == format[i] && k[j].id[1] == format[i + 1])
{
length += k[j].f(x);
i += 2;
goto Here;
}
j--;
}
_putchar(format[i]);
length++;
i++;
}
va_end(x);
return (length);
}
