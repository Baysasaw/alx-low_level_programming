#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that allocates to a space in memory
 * @str: a string given as a parameter
 * Return: a pointer to newly allocated in memory
 */

char *_strdup(char *str)
{
	char *t;
	int i;

	i = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\n')
	{
		t = malloc(*str);
		if (t == NULL)
			return (NULL);
		t[i] = str[i];

		i++;
	}
	return (t);
}
