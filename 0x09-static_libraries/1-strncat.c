#include "main.h"

/**
 * _strncat - Appends n bytes of one string to another.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Number of bytes to concatenate.
 *
 * Return: Pointer to the resulting string.
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_end = 0;
int src_index = 0;

while (dest[dest_end] != '\0')
dest_end++;

while (src_index < n && src[src_index] != '\0')
{
dest[dest_end] = src[src_index];
dest_end++;
src_index++;
}
dest[dest_end] = '\0';
return (dest);
}
