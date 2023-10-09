#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Adjusts the size of a memory block.
 * @ptr: Original memory block.
 * @old_size: Size of the original memory block.
 * @new_size: Desired size of the memory block.
 *
 * Return: Pointer to the resized block of memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_block, *previous_block;
unsigned int min_size, idx;

if (new_size == old_size)
return (ptr);

if (!ptr)
return (malloc(new_size));

if (!new_size && ptr)
{
free(ptr);
return (NULL);
}

new_block = malloc(new_size);
if (!new_block)
return (NULL);

previous_block = ptr;
min_size = (new_size < old_size) ? new_size : old_size;

for (idx = 0; idx < min_size; idx++)
new_block[idx] = previous_block[idx];

free(ptr);
return (new_block);
}
