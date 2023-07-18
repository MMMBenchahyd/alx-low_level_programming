#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char lttr;

	for (lttr = 'a'; lttr <= 'z'; lttr++)
		_putchar(lttr);

	_putchar('\n');
}
