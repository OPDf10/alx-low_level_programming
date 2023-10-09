#include <stdlib.h>
#include "main.h"

/**
 * _memset - sets memory with a constant byte.
 * @s: destination memory to set.
 * @b: character to set.
 * @n: number of bytes to set.
 *
 * Return: pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}

/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of members of the array.
 * @size: size of each member.
 *
 * Return: pointer to allocated memory or NULL if it fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *new_memory;

if (nmemb == 0 || size == 0)
return (NULL);

new_memory = malloc(nmemb * size);
if (!new_memory)
return (NULL);

_memset(new_memory, 0, nmemb * size);

return (new_memory);
}
