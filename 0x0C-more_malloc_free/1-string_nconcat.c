#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l1 = 0, l2 = 0, j, i;
	char *ptr;
	while (s1[l1])
	{
		l1++;
	}
	while (s2[l2])
	{
		l2++;
	}

	if (n < l2)
		ptr = malloc(l2 + n + 1);
	else
		ptr = malloc(l2 + l1 + 1);
	if (ptr == NULL)
		return (NULL);
	while (i < l1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (n < l2 && i < (l1 + n))
		ptr[i++] = s2[j++];
	while (n >= l2 && i < (l1 + l2))
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	return (ptr);
}
