#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - determines the natural square root for a given number.
 * @n: the target number
 *
 * Return: computed natural square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - uses recursion to identify the square root.
 * @n: the number being evaluated
 * @i: current evaluation point
 *
 * Return: determined square root or -1
 */
int actual_sqrt_recursion(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (actual_sqrt_recursion(n, i + 1));
}
