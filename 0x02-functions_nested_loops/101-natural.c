#include "main.h"
#include <stdio.h>

/**
 * compute_sum - Calculates the sum of multiples of 3 or 5 below 1024.
 * Return: The sum of the multiples.
 */
int compute_sum(void)
{
int num, total = 0;

for (num = 1; num < 1024; num++)
{
if (num % 3 == 0 || num % 5 == 0)
{
total += num;
}
}

return (total);
}

/**
 * main - Entry point. Calls compute_sum and prints the result.
 * Return: Always 0 (success).
 */
int main(void)
{
int result;

result = compute_sum();
printf("%d\n", result);

return (0);
}

