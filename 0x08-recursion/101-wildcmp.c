#include "main.h"

/**
 * wildcmp - Determines if two strings are equivalent,
 * considering the wildcard '*'
 * @s1: The first string
 * @s2: The second string, which might contain wildcards
 *
 * Return: 1 if the strings can be deemed equivalent, otherwise 0.
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);

if (*s2 == '*')
return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));

if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));

return (0);
}
