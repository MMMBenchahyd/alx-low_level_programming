#include <stdio.h>

/**
* main - prints all possible different combinations of two digits.
*The two digits must be different
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int m;
	int l;
	
	for (n = 48; n < 58; n++)
	{
		for (m = n; m < 58; m++)
			for (l=m; l < 58; l++)
				if (n != m && l != n && l != m)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 55 || m != 56 || l != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
	}
	putchar('\n');
	return (0);
}
