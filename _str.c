#include "main.h"
/**
 * strlen - a fun
 * @str: op
 * Return: length
 */
int strlen(char *str)
{
int length = 0;
while (str[length] != '\0')
{
length++;
}
return (length);
}

/**
 * strlenc - a fun
 * @str: op
 * Return: length
 */
int strlenc(const char *str)
{
int length = 0;
while (str[length] != '\0')
{
length++;
}
return (length);
}
