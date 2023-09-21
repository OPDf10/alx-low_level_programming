#include "main.h"

/**
 * leet - Encode a string into 1337speak.
 * @n: Pointer to the string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *n)
{
char *ptr = n;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";
char *s1_ptr, *s2_ptr;

while (*ptr)
{
s1_ptr = s1;
s2_ptr = s2;

while (*s1_ptr)
{
if (*ptr == *s1_ptr)
{
*ptr = *s2_ptr;
}
s1_ptr++;
s2_ptr++;
}

ptr++;
}

return (n);
}
