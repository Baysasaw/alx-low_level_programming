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
<<<<<<< HEAD
	char *s;
	unsigned int i = 0, j = 0, l1 = 0, l2 = 0;

=======
	unsigned int l1 = 0, l2 = 0, j, i;
	char *ptr;
>>>>>>> d057faf1a33f94a177683ef6a712925da9426b57
	while (s1[l1])
		l1++;
<<<<<<< HEAD
=======
	}
>>>>>>> d057faf1a33f94a177683ef6a712925da9426b57
	while (s2[l2])
		l2++;

	if (n < l2)
		s = malloc(sizeof(char) * (l1 + n + 1));
	else
<<<<<<< HEAD
		s = malloc(sizeof(char) * (l1 + l2 + 1));
	if (NULL)
=======
		ptr = malloc(l2 + l1 + 1);
	if (ptr == NULL)
>>>>>>> d057faf1a33f94a177683ef6a712925da9426b57
		return (NULL);
	while (i < l1)
	{
		s[i] = s1[i];
		i++;
	}
	while (n < l2 && i < (l1 + n))
		s[i++] = s2[j++];
	while (n >= l2 && i < (l1 + l2))
		s[i++] = s2[j++];
	s[i] = '\0';
	return (s);
}
