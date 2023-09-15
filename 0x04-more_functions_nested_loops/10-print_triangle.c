#include "main.h"

/**
 * print_triangle - Displays a triangle on the terminal
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
int row, space, hash;

if (size > 0)
{
for (row = 1; row <= size; ++row)
{

for (space = 0; space < size - row; ++space)
{
_putchar(' ');
}

for (hash = 0; hash < row; ++hash)
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
}
