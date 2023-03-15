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
	int i, j;

	j = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[j] != '\0')
	{
		j++;
	}
	t = malloc(sizeof(char) * (j + 1));

	if (t == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < j; i++)
	{
		t[i] = str[i];
	}
	return (t);
}
