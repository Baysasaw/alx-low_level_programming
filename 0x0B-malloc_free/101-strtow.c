#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * Nword - a function that returns the number of words
 * @str: a string
 * Return: the number of words in the string
 */
int Nword(char *str)
{
	int is_a_space = 0, words = 0, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			is_a_space = 0;
		else if (is_a_space == 0)
		{
			is_a_space = 1;
			words++;
		}
	}
	return (words);
}
/**
 * strtow - a function that splits a string
 * @str: a string
 * Return: a pointer to the splited string
 */
char **strtow(char *str)
{
	char **strs;
	int i, j, k = 0, count_char, words;

	strs = malloc(sizeof(char *) * (words + 1));
	if (strs == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		count_char = 0;
		while (str[i] != ' ')
		{
			count_char++;
			i++;
		}
		if (k < words)
		{
			strs[k] = malloc(sizeof(char) * (count_char + 1));
			k++;
		}
	}
	k = 0;
	for (i = 0; str[i]; i++)
	{

		j = 0;
		if (str[i] != ' ')
		{
			while (str[i] != ' ')
			{
				strs[k][j] = str[i];
				i++;
				j++;
			}
			k++;
		}
	}
	return (strs);
}
