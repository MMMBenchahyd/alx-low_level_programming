#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 *                     starting with 0.
 * @n: The value of the times table to be printed.
 */
void print_times_table(int n)
{
	int i, j, k, m;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j / 10;
				m = i * j % 10;
				if (k == 0)
				{
					_putchar(' ');
					_putchar(m + 48);
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(k + 48);
					_putchar(m + 48);
					_putchar(',');
					_putchar(' ');
				}
			}
		_putchar('\n');
		}
	}
}
