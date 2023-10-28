#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed to by s 
 *           with the constant byte b.
 * @s: Starting address of memory to be filled.
 * @b: The desired value.
 * @n: Number of bytes to be changed.
 *
 * Return: A pointer to the memory area s.
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
