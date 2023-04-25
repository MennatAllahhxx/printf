#include "main.h"
/**
 * _strlen - a fun
 * @str: op
 * Return: length
 */
int _strlen(char *str)
{
int length = 0;
while (str[length] != '\0')
{
length++;
}
return (length);
}

/**
 * _strlenc - a fun
 * @str: op
 * Return: length
 */
int _strlenc(const char *str)
{
int length = 0;
while (str[length] != '\0')
{
length++;
}
return (length);
}
