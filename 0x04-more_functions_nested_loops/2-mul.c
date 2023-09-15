#include "main.h"
#include <stdio.h>

/**
 * mul - Multiplies two integers and returns the result.
 * @a: The first integer.
 * @b: The second integer.
 *
 * Return: The product of a and b.
 */
int mul(int a, int b)
{
int product = a * b;
return (product);
}

/**
 * main - Tests the mul function.
 *
 * Return: Always 0 (success).
 */

int main(void)
{
printf("%d\n", mul(98, 1024));
printf("%d\n", mul(-402, 4096));
return (0);
}
