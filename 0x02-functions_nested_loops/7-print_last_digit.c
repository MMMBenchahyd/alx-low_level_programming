include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in question.
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int l_d = n % 10;

	if (l_d < 0)
		l_d *= -1;

	_putchar(l_d + '0');

	return (l_d);
}
