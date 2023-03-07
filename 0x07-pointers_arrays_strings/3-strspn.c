#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	int n = 0;
	int i, r;

	for (i = 0; s[i]; i++)
	{
		for (r = 0; accept[r]; r++)
		{
			if (s[i] == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
	}
	return (n);
}


