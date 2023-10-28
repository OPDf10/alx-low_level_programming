#include "main.h"

/**
 * _memset - Updates memory spaces with a specified byte.
 * @s: Pointer to the memory area.
 * @b: Byte value to replace with.
 * @n: Number of bytes to replace.
 *
 * Return: Pointer to the updated memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int index = 0;

while (n > 0)
{
s[index] = b;
index++;
n--;
}
return (s);
}
