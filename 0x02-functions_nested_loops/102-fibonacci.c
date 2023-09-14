#include "main.h"
#include <stdio.h>

/**
 * main - Outputs the first 50 Fibonacci numbers starting with 1 and 2,
 *        separated by commas and spaces.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
unsigned long a = 1, b = 2, next;

int i;

printf("%lu, %lu", a, b);

for (i = 2; i < 50; i++)
{
next = a + b;
printf(", %lu", next);
a = b;
b = next;
}
printf("\n");

return (0);
}
