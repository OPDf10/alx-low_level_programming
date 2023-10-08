#include "main.h"

/**
 * _isalpha - Verifies if a character is an alphabetic letter.
 * @c: Character under inspection.
 *
 * Return: 1 if the character is alphabetic, 0 if not.
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
