#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the attributes of a dog structure.
 *
 * Description: This function prints out the name, age, and owner
 * attributes of a dog structure. If any of the attributes are NULL,
 * it prints "(nil)" in place of the attribute.
 *
 * @d: Pointer to the structure of type dog.
 */

void print_dog(struct dog *d)
{
if (!d)
return;

if (!d->name)
d->name = "(nil)";
if (!d->owner)
d->owner = "(nil)";

printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
