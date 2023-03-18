#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function of two dimensional array
 * @width: width of the array
 * @height: height of the array
 * Return: a pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	if (width <= 0 && height <= 0)
	{
		return (NULL);
	}
	a = malloc(sizeof(int *) * height);
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
