#include "main.h"

/**
 * _strncat - concat 2 string
 * @dest:char
 * @src:char
 * @n:int
 * Return:char
 */
char *_strncat(char *dest, char *src, int n)
{
	char *str = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		if (n > 0)
		{
		*dest = *src;
		dest++;
		src++;
		}
		else
		{
			break;
		}
	}
	*dest = '\0';
	return (str);
}
