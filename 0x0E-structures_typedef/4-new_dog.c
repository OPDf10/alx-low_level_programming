#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Calculate the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */

int _strlen(char *s)
{
int length = 0;

while (s[length])
length++;

return (length);
}

/**
 * _strcpy - Copies the string pointed to by src, including the
 * terminating null byte, to the buffer pointed to by dest.
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: A pointer to the destination string dest.
 */

char *_strcpy(char *dest, char *src)
{
int i, length;

length = _strlen(src);

for (i = 0; i < length; i++)
dest[i] = src[i];
dest[i] = '\0';

return (dest);
}

/**
 * new_dog - Initializes a new dog structure.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner's name.
 *
 * Return: A pointer to the new structure, or NULL if it fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ndog;
int nlen, olen;

nlen = _strlen(name);
olen = _strlen(owner);

ndog = malloc(sizeof(dog_t));
if (!ndog)
return (NULL);

ndog->name = malloc(nlen + 1);
if (!ndog->name)
{
free(ndog);
return (NULL);
}

ndog->owner = malloc(olen + 1);
if (!ndog->owner)
{
free(ndog->name);
free(ndog);
return (NULL);
}

_strcpy(ndog->name, name);
_strcpy(ndog->owner, owner);
ndog->age = age;

return (ndog);
}
