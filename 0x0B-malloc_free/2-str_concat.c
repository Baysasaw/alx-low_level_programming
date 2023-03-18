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
	char *str;
	int l1 = 0, l2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l1])
	{
		l1++;
	}
	while (s2[l2])
	{
		l2++;
	}
	str = malloc(l1 + l2 + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{
		str[i] = s1[i];
	}
	j = i;
	for (i = 0; s2[i]; i++)
	{
		str[j] = s2[i];
		j++;
	}
	return (str);
}
