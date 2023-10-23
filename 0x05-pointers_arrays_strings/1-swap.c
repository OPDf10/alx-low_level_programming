#include "main.h"

/**
 * swap_int - Exchanges the values of two given integers.
 * @a: First integer value to be swapped.
 * @b: Second integer value to be swapped.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
