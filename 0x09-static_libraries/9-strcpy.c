#include "main.h"

/**
 * _strcpy - Copies the content of one string to another.
 * @dest: Destination string.
 * @src: Source string.
 *
 * Return: Pointer to destination string.
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
