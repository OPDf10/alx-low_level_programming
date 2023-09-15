#include "main.h"

/**
 * print_square - Prints a square shape made of '#' characters.
 * @size: The size of the square.
 *
 * Return: void (Parentheses included as per your guidelines).
 */

void print_square(int size)
{
int row, col;

if (size > 0)
{
for (row = 1; row <= size; row++)
{
for (col = 1; col <= size; col++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}

return;
}
