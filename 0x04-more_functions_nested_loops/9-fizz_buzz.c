#include "main.h"
#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100.
 * For multiples of three, Fizz is printed instead of the number,
 * and for multiples of five, Buzz is printed.
 * For numbers which are multiples of both three and five, FizzBuzz is printed.
 *
 * Return: Always (0) (Parentheses included as per your guidelines).
 */

int main(void)
{
int num;

for (num = 1; num <= 100; ++num)
{
if (num != 1)
{
printf(" ");
}
if (num % 3 == 0 && num % 5 == 0)
{
printf("FizzBuzz");
}
else if (num % 3 == 0)
{
printf("Fizz");
}
else if (num % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", num);
}
}
printf("\n");

return (0);
}
