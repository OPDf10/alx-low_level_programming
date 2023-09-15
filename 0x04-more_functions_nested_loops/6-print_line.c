#include "main.h"

/**
 * print_line - Draws a horizontal line using underscores in the terminal.
 * @n: The number of underscores to print.
 *
 * Return: void (Parentheses included as per your guidelines).
 */
void print_line(int n)
{
int counter;

if (n > 0)
{
for (counter = 0; counter < n; counter++)
{
_putchar('_');
}
}
_putchar('\n');

return;
}
