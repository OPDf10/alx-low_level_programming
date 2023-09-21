#include "main.h"

/**
 * is_separator - Checks if a character is a separator.
 * @c: The character to check.
 *
 * Return: 1 if character is a separator, otherwise 0.
 */
int is_separator(char c)
{
char separators[] = " \t\n,;.!?\"(){}";
char *sep_ptr = separators;

while (*sep_ptr)
{
if (c == *sep_ptr)
return (1);
sep_ptr++;
}

return (0);
}

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
char *ptr = str;

if (*ptr >= 'a' && *ptr <= 'z')
*ptr -= 32;

while (*ptr)
{
if (is_separator(*ptr) && *(ptr + 1) && *(ptr + 1) >= 'a' && *(ptr + 1) <= 'z')
*(ptr + 1) -= 32;

ptr++;
}

return (str);
}

