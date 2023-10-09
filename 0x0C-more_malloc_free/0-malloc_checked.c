#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory.
 * @b: Size of memory to be allocated.
 *
 * Return: A pointer to the allocated space.
 */
void *malloc_checked(unsigned int b)
{
void *allocated_memory;

allocated_memory = malloc(b);

if (!allocated_memory)
exit(98);

return (allocated_memory);
}
