#include "main.h"

/**
 * _puts - prints a string
 * @str: the string
 *
 * Return: the length of the string
 */
void _puts(char *str)
{
	int i = 0;

	for (; *str++;)
	{
		_putchar(*(str - 1));
	}
	_putchar('\n');
}
