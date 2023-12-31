#include "main.h"

/**
 * _pow_recursion - computes x to the power of y, recursively.
 * @x: base number
 * @y: exponent
 *
 * Return: computed result
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
