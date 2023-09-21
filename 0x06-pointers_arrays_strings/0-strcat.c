#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
char *original_dest = dest;

while (*dest)
dest++;

while (*src)
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';

return (original_dest);
}

