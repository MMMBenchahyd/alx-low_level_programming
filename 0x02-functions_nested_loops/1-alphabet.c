#include "main.h"
/**
  *main : prints the alphabet, in lowercase, followed by a new line.
  *Return : always 0
  */
void print_alphabet(void)
{
	int i;
	for(i=97; i<=122; i++)
	{
		_putchar(i);
	}
	_putcher('\n');
}
