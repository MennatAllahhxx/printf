#include <stdarg.h>
#include "main.h"
/**
 * _printf - fun
 * @format: op
 * Return: output
 */
int _printf(const char *format, ...)
{
int i = 0, count = 0;
va_list args;
va_start(args, format);
while (format && format[i])
{
if (format[i] == '%')
{
i++;
switch (format[i])
{
case 'c':
_putchar(va_arg(args, int));
break;
case 's':
count += write(1, va_arg(args, char *), -1);
break;
case '%':
_putchar('%');
break;
default:
_putchar('%');
_putchar(format[i]);
break;
}
}
else
{
_putchar(format[i]);
count++;
}
i++;
}
va_end(args);
return (count);
}
