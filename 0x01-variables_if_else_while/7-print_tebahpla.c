#include <stdio.h>

/**
* main - prints the lowercase alphabet in reverse.
* Return: Always 0 (Success)
*/
int main(void)
{
	char lttr;

	for (lttr = 'z'; lttr >= 'a'; lttr--)
	{
		putchar(lttr);
	}
	putchar('\n');
	return (0);
}
