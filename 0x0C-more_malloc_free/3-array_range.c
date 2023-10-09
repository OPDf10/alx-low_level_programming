#include "main.h"
#include <stdlib.h>

/**
 * array_range - Generates an array of integers from min to max.
 * @min: Starting value of the array.
 * @max: Ending value of the array.
 *
 * Return: Pointer to the generated array.
 */
int *array_range(int min, int max)
{
int *arr;
int index, arr_length;

if (min > max)
return (NULL);

arr_length = max - min + 1;

arr = malloc(arr_length *sizeof(int));
if (!arr)
return (NULL);

for (index = 0; min <= max; index++, min++)
arr[index] = min;

return (arr);
}
