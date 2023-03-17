#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 * @min: a number
 * @max: a number
 * Return: a pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *x;
	int i;

	x = malloc(sizeof(int) * (max - min));
	if (min > max || x == NULL)
		return (NULL);
	for (i = 0; i + min < max; i++)
	{
		x[i] = min + i;
	}
	return (x);
}
