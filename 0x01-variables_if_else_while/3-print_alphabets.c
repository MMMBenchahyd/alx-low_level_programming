#include <stdio.h>

/**
* main - Prints the alphabet in lowercase.
* Return: Always 0 (Success)
*/
int main(void)
{
	char lttr;

	for (lttr = 'a'; lttr <= 'z'; lttr++)
		putchar(lttr);
	for (lttr = 'A'; lttr <= 'Z'; lttr++)
		putchar(lttr);

	putchar('\n');

	return (0);
}
