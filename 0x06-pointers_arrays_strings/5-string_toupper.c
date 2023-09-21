#include "main.h"

/**
 * string_toupper - convert lowercase characters to uppercase
 * @n: pointer to the string
 *
 * Return: pointer to the modified string
 */
char *string_toupper(char *n)
{
char *p = n;

while (*p)
{
if (*p >= 'a' && *p <= 'z')
*p -= 32;

p++;
}

return (n);
}
