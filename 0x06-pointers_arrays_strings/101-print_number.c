#include "main.h"


void recursive_print(unsigned int n);

/**
 * print_number - Print an integer as a string.
 * @n: Integer to be printed.
 *
 * Return: void.
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}

recursive_print(n);
}

/**
 * recursive_print - Helper function to print the number recursively.
 * @n: Integer to be printed.
 *
 * Return: void.
 */
void recursive_print(unsigned int n)
{
if (n == 0)
{
return;
}

recursive_print(n / 10);

_putchar((n % 10) + '0');
}

