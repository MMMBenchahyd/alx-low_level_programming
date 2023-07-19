#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in question.
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
	int r;
	r = n % 10;
	if (n >= 0)
		return (r);
	else
	{
		r *= -1;
		return (r);
	}
	_putchar(r + '0');
}
