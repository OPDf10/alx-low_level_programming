#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: The string.
 */
void puts_half(char *str)
{
int len = 0, n;

while (str[len])
{
len++;
}

if (len % 2 == 0)
{
n = len / 2;
}
else
{
n = (len - 1) / 2;
}

for (int i = n; i < len; i++)
{
putchar(str[i]);
}
putchar('\n');
}
