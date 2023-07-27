#include "main.h"
/**
 * cap_string - capitalizes all words in a string
 * @s:string
 * Return:char
 */
char *cap_string(char *s)
{

	char *p = s;

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 'a' - 'A';
		s++;
	}
	return (p);
}
