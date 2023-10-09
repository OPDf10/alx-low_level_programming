#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings up to n bytes from the second.
 * @s1: First string.
 * @s2: Second string.
 * @n: Maximum bytes to concatenate from s2.
 *
 * Return: New concatenated string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *new_str;
unsigned int idx = 0, jdx = 0, s1_len = 0, s2_len = 0;

while (s1 && s1[s1_len])
s1_len++;
while (s2 && s2[s2_len])
s2_len++;

if (n < s2_len)
new_str = malloc(s1_len + n + 1);
else
new_str = malloc(s1_len + s2_len + 1);

if (!new_str)
return (NULL);

for (; idx < s1_len; idx++)
new_str[idx] = s1[idx];

for (; jdx < n && jdx < s2_len; jdx++)
new_str[idx++] = s2[jdx];

new_str[idx] = '\0';

return (new_str);
}
