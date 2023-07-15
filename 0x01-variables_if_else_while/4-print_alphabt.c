#include <stdio.h>

/**
* main - Prints the alphabet in lowercase, except e and q.
* Return: Always 0 (Success)
*/
int main(void)
{
	char lttr;

	for (lttr = 'a'; lttr <= 'z'; lttr++)
	{
		if (lttr != 'e' && lttr != 'q')
			putchar(lttr);
	}

	putchar('\n');

	return (0);
}
