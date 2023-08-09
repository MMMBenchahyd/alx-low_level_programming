#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional ar of integers.
 * @w: width of array
 * @h: height of array
 *
 * Return: a pointer to a 2 dimensional ar of integers.
 */
int **alloc_grid(int w, int h)
{
	int **ar, i, j;
	int l = w * h;

	if (l <= 0)
		return (NULL);

	ar = (int **)malloc(sizeof(int *) * h);
	if (ar == NULL)
		return (NULL);

	for (i = 0; i < h; i++)
	{
		ar[i] = (int *)malloc(sizeof(int) * w);
		if (ar[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(ar[i]);
			free(ar);
			return (NULL);
		}
	}

	for (i = 0; i < h; i++)
		for (j = 0; j < w; j++)
			ar[i][j] = 0;

	return (ar);
}
