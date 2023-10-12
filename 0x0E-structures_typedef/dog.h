#ifndef DOG_HEADER
#define DOG_HEADER

/* 
 * struct dog - Description of a dog's attributes
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: description
 */
struct dog
{
char *name;
float age;
char *owner;
};

/* 
 * dog_t - A type definition for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
