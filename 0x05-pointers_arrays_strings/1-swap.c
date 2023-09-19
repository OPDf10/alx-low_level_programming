#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: first variable.
 * @b: second variable.
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int **p = &a, **q = &b;
	**p = *b;
	**q = *a;
}
