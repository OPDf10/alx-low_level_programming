#include "main.h"

/**
 * _strncpy - Copies n characters from src to dest.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Number of characters to be copied.
 *
 * Return: Pointer to destination string.
 */
char *_strncpy(char *dest, char *src, int n)
{
int idx = 0;

while (idx < n && src[idx] != '\0')
{
dest[idx] = src[idx];
idx++;
}
while (idx < n)
{
dest[idx] = '\0';
idx++;
}
return (dest);
}
