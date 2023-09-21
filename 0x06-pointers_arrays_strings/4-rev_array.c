#include "main.h"

/**
 * reverse_array - reverse an array of integers
 * @a: pointer to the array
 * @n: number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
int *start = a;
int *end = a + n - 1;
int temp;

while (start < end)
{
temp = *start;
*start = *end;
*end = temp;

start++;
end--;
}
}
