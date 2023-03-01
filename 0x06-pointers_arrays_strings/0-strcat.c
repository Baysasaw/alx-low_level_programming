#include "main.h"
/**
 * _strcat - a function that concatenates two strings.
 * @dest: a string
 * @src: a string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (dest[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);

}
