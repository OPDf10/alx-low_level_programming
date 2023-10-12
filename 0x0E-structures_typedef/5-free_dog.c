#include <stdlib.h>
#include "dog.h"

/*
 * free_dog - Clears memory used by a dog structure
 * @d: Dog structure to clear
 */
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
