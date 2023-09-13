#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char A;

	while (i < 10)
	{
		A = 'a';
		while (A <= 'z')
		{
			_putchar(A);
			A++;
		}
		_putchar('\n');
		i++;
	}
}
