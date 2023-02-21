#include  "main.h"

/**
 * print_alphabet_x10 - Write a function that prints 10x
 * the alphabet, in lowercase,
 *
 * Return: 0 (success)
 */

void print_alphabet_x10(void)
{
	char echo;
	char lima;

	for (echo = 0; echo <= 9; echo++)
	{
		for (lima = 'a'; lima <= '9'; lima++)
		{
			_putchar(lima);
		}
		_putchar('\n');
	}
}
