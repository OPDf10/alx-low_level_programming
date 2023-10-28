#include "main.h"

/**
 * _memcpy - Copies bytes from source to destination.
 * @dest: Target memory area.
 * @src: Source memory area.
 * @n: Count of bytes to copy.
 *
 * Return: Pointer to the destination memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int counter = 0;

while (counter < n)
{
dest[counter] = src[counter];
counter++;
}
return (dest);
}
