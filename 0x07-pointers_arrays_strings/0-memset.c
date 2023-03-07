#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 *@s: the address of memory
 *@b: buffer
 *@n: number of address
 *Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

