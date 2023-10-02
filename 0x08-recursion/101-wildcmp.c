#include "main.h"

/**
 * wildcmp - Determine if two strings are identical considering wildcard '*'
 * @s1: first string
 * @s2: second string possibly containing wildcards
 * 
 * Return: 1 if strings can be considered identical, otherwise 0.
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0')
{
if (*s2 == '*' && *(s2 + 1) != '\0')
return (wildcmp(s1, s2 + 1));
return (*s2 == '\0');
}

if (*s2 == '*')
{
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}
else if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
return (0);
}
