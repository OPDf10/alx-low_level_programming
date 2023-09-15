#include "main.h"

/**
 * _isdigit - Checks if a character is a digit between 0 and 9.
 * @c: The character to be checked.
 *
 * Return: Returns 1 if the character is a digit, otherwise returns 0.
 */

int _isdigit(int c)
{
int result = ('0' <= c && c <= '9') ? 1 : 0;
return (result);
}

