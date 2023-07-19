#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i, j, k, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j / 10;
			m = i * j % 10;
			if (k == 0)
			{
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
