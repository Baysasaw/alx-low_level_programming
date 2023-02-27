#include "main.h"
#include <stdio.h>
/**
 * rev_string -  a function reverse a string
 * @s: a string to be print
 */
void rev_string(char *s)
{
	int len = 0;
	int index = 0;
	char tmp;

	for (; s[len] != '\0';)
	{
		len++;
	}
	for (index = len - 1; index >= len / 2; index--)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tmp;
	}
}
