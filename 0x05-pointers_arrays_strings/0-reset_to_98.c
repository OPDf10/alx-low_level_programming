#include<stdio.h>

/**
 * reset_to_98 - a function that takes a pointer to an int as parameter
 * and updates the value it points to to 98.
 * @n: Variable will be changed in its value.
 */

void reset_to_98(int *n)
{
	int *p = &n;
	*p = 98;

	printf("Value of n= %d", *p);
}
