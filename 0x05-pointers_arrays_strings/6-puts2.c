#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: The string.
 */
void puts2(char *str)
{
int i = 0;
while (str[i])
{
if (i % 2 == 0)
{
putchar(str[i]);
}
i++;
}
putchar('\n');
}
