#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encoder using ROT13 cipher.
 * @s: Pointer to string to be encoded.
 *
 * Return: Pointer to the encoded string.
 */
char *rot13(char *s)
{
char *ptr = s;
char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char *data1_ptr, *datarot_ptr;

while (*ptr)
{
data1_ptr = data1;
datarot_ptr = datarot;

while (*data1_ptr)
{
if (*ptr == *data1_ptr)
{
*ptr = *datarot_ptr;
}

data1_ptr++;
datarot_ptr++;
}

ptr++;
}

return (s);
}
