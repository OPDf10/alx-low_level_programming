#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a dog structure with given attributes.
 *
 * Description: This function initializes a structure of type dog
 * by setting its name, age, and owner attributes.
 *
 * @d: Pointer to the structure of type dog.
 * @name: Pointer to a character string for dog's name.
 * @age: Float value for dog's age.
 * @owner: Pointer to a character string for dog's owner.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (!d)
d = malloc(sizeof(struct dog));
d->name = name;
d->age = age;
d->owner = owner;
}
