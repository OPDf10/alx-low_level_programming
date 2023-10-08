#include "main.h"

/**
 * _strspn - Computes the length of the initial segment of s.
 * @s: Main string.
 * @accept: Substring of accepted chars.
 *
 * Return: Number of bytes in the initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
count++;
break;
}
else if (accept[i + 1] == '\0')
return (count);
}
s++;
}
return (count);
}
