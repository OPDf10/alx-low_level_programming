#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: The string to be printed.
 */
void print_rev(char *s)
{
int len = 0;
while (s[len])
{
len++;
}

for (int i = len - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
