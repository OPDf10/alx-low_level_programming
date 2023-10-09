#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * is_digit - Validates if a string is purely numeric.
 * @s: Input string to validate.
 *
 * Return: 1 if all characters are digits, otherwise 0.
 */
int is_digit(char *s)
{
while (*s)
{
if (*s < '0' || *s > '9')
return (0);
s++;
}
return (1);
}

/**
 * _strlen - Computes the length of a string.
 * @s: Input string.
 *
 * Return: Length of s.
 */
int _strlen(char *s)
{
int length = 0;
while (*s++)
length++;
return (length);
}

/**
 * errors - Print an error message and exit.
 */
void errors(void)
{
printf("Error\n");
exit(98);
}

/**
 * main - Multiplies two numbers passed as strings.
 * @argc: Number of arguments.
 * @argv: Argument array.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
int *result, len, idx, j, len1, len2, sum, carry, num1, num2;
char *s1 = argv[1], *s2 = argv[2];

if (argc != 3 || !is_digit(s1) || !is_digit(s2))
errors();
len1 = _strlen(s1);
len2 = _strlen(s2);
len = len1 + len2;

result = malloc(sizeof(int) * len);
if (!result)
errors();

for (idx = 0; idx < len; idx++)
result[idx] = 0;

for (len1--; len1 >= 0; len1--)
{
num1 = s1[len1] - '0';
carry = 0;
for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
{
num2 = s2[len2] - '0';
sum = num1 *num2 + result[len1 + len2 + 1] + carry;
result[len1 + len2 + 1] = sum % 10;
carry = sum / 10;
}
result[len1 + len2 + 1] += carry;
}
for (idx = 0, j = 0; idx < len && !result[idx]; idx++)
j++;
if (j == len)
_putchar('0');
else
while (idx < len)
_putchar(result[idx++] + '0');
_putchar('\n');
free(result);
return (0);
}
