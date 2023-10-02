#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - determines if a given integer is prime.
 * @n: the number to be checked
 *
 * Return: 1 if the number is prime, otherwise 0
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (actual_prime(n, n - 1));
}

/**
 * actual_prime - recursively checks for prime status of a number.
 * @n: number under inspection
 * @i: current divisor being evaluated
 *
 * Return: 1 if prime, otherwise 0
 */
int actual_prime(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
return (actual_prime(n, i - 1));
}

