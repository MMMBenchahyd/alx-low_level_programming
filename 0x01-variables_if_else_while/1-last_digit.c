#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - assign a random number to the variable n each time it is executed
*and print the last digit of the number stored in the variable n
*Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	m = n % 10;
	printf("Last digit of %d is %d ", n, m);
	if (m > 5)
	{
		printf("and is greater than 5");
	}
	if (m == 0)
	{
		printf("and is 0");
	}
	if (m < 6 && m != 0)
	{
		printf("and is less than 6 and not 0");
	}

	printf("\n");

	return (0);
}
