#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - determines if a given
 * string is palindrome.
 * @s: target string
 *
 * Return: 1 for palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - computes the length of
 * a string recursively.
 * @s: input string
 *
 * Return: total length of the string.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - recursively evaluates
 * string characters for palindrome status.
 * @s: string under examination
 * @i: current position
 * @len: total length of the string
 *
 * Return: 1 for palindrome, 0 otherwise.
 */
int check_pal(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
return (0);
if (i >= len)
return (1);
return (check_pal(s, i + 1, len - 1));
}

