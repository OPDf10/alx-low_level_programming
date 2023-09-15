#include "main.h"

/**
 * print_diagonal - Prints a diagonal line composed of backslashes.
 * @n: The number of backslashes to be printed.
 *
 * Return: void (Parentheses included as per your guidelines).
 */

void print_diagonal(int n)
{
int row, col;

if (n > 0)
{
for (row = 0; row < n; row++)
{
for (col = 0; col < row; col++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}

return;
}
