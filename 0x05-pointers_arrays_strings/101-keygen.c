#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random password of length 12
 * containing alphanumeric characters.
 * Return: Always 0.
 */
int main(void)
{
int length = 12;
char characters[] =
"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
char password[13];

srand(time(NULL));

for (int i = 0; i < length; i++)
{
password[i] = characters[rand() % (sizeof(characters) - 1)];
}
password[length] = '\0';

printf("Generated Password: %s\n", password);
return (0);
}
