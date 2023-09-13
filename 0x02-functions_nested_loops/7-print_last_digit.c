#include "main.h"

/**
 * print_last_digit -  a function that prints the last digit of a number.
 * @v: variable to use for testing
 * Return: the last number of a digit.
 */

int print_last_digit(int v)
{
int a;

if (v < 0)
{
v = -v;
a = v % 10;
_putchar(a);
}
else
{
a = v % 10;
_putchar(a);
}
return (a);
}
