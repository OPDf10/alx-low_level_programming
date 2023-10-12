#include <stdlib.h>
#include "dog.h"

/* 
 * _strlen - Calculates the string's length
 * @s: String to measure
 * Return: Length of the string
 */
int _strlen(char *s)
{
int length = 0;

while (s[length])
length++;

return length;
}

/* 
 * _strcpy - Duplicates a string
 * @dest: Target buffer
 * @src: Source string
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i, length;

length = _strlen(src);

for (i = 0; i < length; i++)
dest[i] = src[i];
dest[i] = '\0';

return dest;
}

/* 
 * new_dog - Makes a new dog
 * @name: Dog's name
 * @age: Dog's age
 * @owner: Dog's owner
 * Return: Pointer to the new dog or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ndog;
int nlen, olen;

nlen = _strlen(name);
olen = _strlen(owner);

ndog = malloc(sizeof(dog_t));
if (!ndog)
return NULL;

ndog->name = malloc(nlen + 1);
if (!ndog->name)
{
free(ndog);
return NULL;
}

ndog->owner = malloc(olen + 1);
if (!ndog->owner)
{
free(ndog->name);
free(ndog);
return NULL;
}

_strcpy(ndog->name, name);
_strcpy(ndog->owner, owner);
ndog->age = age;

return ndog;
}
