#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any set of bytes.
 * @s: Main string to be examined.
 * @accept: Substring of characters.
 *
 * Return: Pointer to byte in s that matches
 * one of bytes in accept, or NULL if not found.
 */
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
for (int k = 0; accept[k]; k++)
{
if (*s == accept[k])
return (s);
}
s++;
}
return (NULL);
}

