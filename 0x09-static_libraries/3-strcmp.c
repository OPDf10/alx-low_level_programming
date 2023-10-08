#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Difference of the two strings.
 */
int _strcmp(char *s1, char *s2)
{
int idx = 0;

while (s1[idx] != '\0' && s2[idx] != '\0')
{
if (s1[idx] != s2[idx])
return (s1[idx] - s2[idx]);
idx++;
}
return (s1[idx] - s2[idx]);
}
