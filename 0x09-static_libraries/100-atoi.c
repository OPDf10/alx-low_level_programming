#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: String containing characters and numbers.
 *
 * Return: Integer conversion of the string.
 */
int _atoi(char *s)
{
int sign = 1, i = 0;
int result = 0;

while (s[i] && !(s[i] >= '0' && s[i] <= '9'))
{
if (s[i] == '-')
sign *= -1;
i++;
}
while (s[i] && (s[i] >= '0' && s[i] <= '9'))
{
result = result * 10 + (s[i] - '0');
i++;
}
return (result *sign);
}
