#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *copy;
	int i, l = 0;

	if (str == 0)
		return (0);

	while (str[l] != '\0')
		l++;

	copy = (char *)malloc((sizeof(char) * l) + 1);
	if (copy == 0)
		return (0);

	for (i = 0; i < l; i++)
		copy[i] = str[i];
	copy[l] = '\0';

	return (copy);
}
