#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>
/**
 * struct format - a struct
 * @id: op
 * @f: poiner
 */
typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int _pointer(va_list x);
int _hex_aux(unsigned long int number);
int _HEX_aux(unsigned int number);
int _ex_string(va_list x);
int _HEX(va_list x);
int _hex(va_list x);
int _oct(va_list x);
int _unsigned(va_list x);
int _binary(va_list x);
int _rev(va_list x);
int _rot13(va_list x);
int _integer(va_list x);
int _decimal(va_list x);
int _strlen(char *str);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *str);
int _percent(void);
int rev_string(char *s);
int _char(va_list x);
int _string(va_list x);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
