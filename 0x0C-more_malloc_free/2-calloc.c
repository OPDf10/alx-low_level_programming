#include "main.h"
#include <stdlib.h>

/**
 * _memset - Fills a block of memory with a specified byte.
 * @s: Block of memory.
 * @b: Byte to fill with.
 * @n: Number of bytes to fill.
 *
 * Return: Pointer to the block of memory.
 */
char *_memset(char *s, char b, unsigned int n)
{
for (unsigned int i = 0; i < n; i++)
s[i] = b;

return (s);
}

/**
 * _calloc - Allocates and initializes memory for an array of nmemb elements.
 * @nmemb: Number of elements.
 * @size: Size of each element.
 *
 * Return: Pointer to the allocated memory, or NULL if failed.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *allocated_array;

if (nmemb == 0 || size == 0)
return (NULL);

allocated_array = malloc(nmemb * size);
if (!allocated_array)
return (NULL);

_memset(allocated_array, 0, nmemb * size);

return (allocated_array);
}
