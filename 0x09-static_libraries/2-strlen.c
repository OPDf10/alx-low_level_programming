#include "main.h"

/**
 * _strlen - Computes the length of the string.
 * @s: Target string.
 *
 * Return: Length of s.
 */
int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}
return (length);
}
