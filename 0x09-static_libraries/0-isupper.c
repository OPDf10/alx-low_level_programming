#include "main.h"

/**
 * _isupper - Checks if a character is an uppercase letter.
 * @c: The character to be verified.
 *
 * Return: 1 if the character is uppercase, 0 otherwise.
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
return (0);
}