#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied from src to dest
 *
 * Return: pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
char *original_dest = dest;


while (n-- > 0 && *src)
{
*dest++ = *src++;
}


while (n-- > 0)
{
*dest++ = '\0';
}

return (original_dest);
}

