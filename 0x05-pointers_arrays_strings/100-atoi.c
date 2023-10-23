/**
 * _atoi - Converts a string to an integer.
 * @s: The string.
 * Return: The integer.
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int started = 0;

while (*s)
{
if (*s == '-')
sign = -sign;
else if (*s >= '0' && *s <= '9')
{
result = result * 10 + (*s - '0') * sign;
started = 1;
}
else if (started)
break;
s++;
}
return (result);
}
