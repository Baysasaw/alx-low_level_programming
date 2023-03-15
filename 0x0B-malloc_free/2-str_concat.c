#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: string
 * @s2: string
 * Return: a string that concatenates of two strings
 */
char *str_concat(char *s1, char *s2)
{
	char *_str;
	int i, j;

	j = 0;
	if (s1 == NULL)
	{
		_str = malloc(sizeof(*s2));
		s1 = "";
	}
	else if (s2 == NULL)
	{
		_str = malloc(sizeof(*s1));
		s2 = "";
	}
	else
		_str = malloc(sizeof(*s1) + sizeof(*s2));
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		_str[j] = *(s1 + i);
		j++;
	}
	for (i = 0; *(s2 + i) != '\0'; i++)
	{
		_str[j] = *(s2 + i);
		j++;
	}
	return (_str);
}
