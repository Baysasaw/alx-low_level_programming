#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates a array of chars
 * @size: size of the array
 * @c: the value the the array
 *
 * Return: a arry of chars
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(c) * size);
	if (size  == 0)
	return (NULL);
	for (i = 0; i <= size; i++)
	{
		str[i] = c;
	}
		return (str);
}
