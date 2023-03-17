#include "main.h"
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: elements of array
 * @size: size of the array
 * Return: pointer the the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char  *t;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	t = malloc(sizeof(nmemb * size));
	for (i = 0; i < size; i++)
	{
		t[i] = nmemb;
	}
	return (t);
}
