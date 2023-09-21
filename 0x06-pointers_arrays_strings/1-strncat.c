#include "main.h"

/**
 * _strncat - concatenate two strings using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src to be appended
 *
 * Return: pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
char *original_dest = dest;

while (*dest)
dest++;

while (n-- > 0 && *src)
{
*dest++ = *src++;
}

*dest = '\0';

return (original_dest);
}

