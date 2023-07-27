#include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s:string
 * Return:char
 */

char *cap_string(char *s)
{

int i = 0;
	char *p = s;
	char dif[] = " \t\n,;.!?\"(){}";

	while (*s != '\0')
	{
		for (i = 0; dif[i] != '\0'; i++)
		{
			if (*s == dif[i])
			{
				if (*(s + 1) >= 'a' && *(s + 1) <= 'z')
					*(s + 1) -= 'a' - 'A';
			}
		}
		s++;
	}
	return (p);
}
