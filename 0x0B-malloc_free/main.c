#inclide "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX school students.
 *
 * Return: ALways 0.
 */

int main(volid)
{
	char *s;

	s = str_concat("Betty", "Holberton");
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return(0);
}

