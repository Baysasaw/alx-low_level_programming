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
	int  *t;
	unsigned int i;

	t = malloc(sizeof(unsigned int) * size);
	if (nmemb == 0 || size == 0 || t == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		t[i] = nmemb;
	}
	return (t);
}
