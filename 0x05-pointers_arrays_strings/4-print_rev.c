#include "main.h"
/**
 * print_rev -  a function that prints a string, in reverse,
 * @s: a string to be print
 */
void print_rev(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{
		c++;
	}
	c = c-6;
	for(; c >= 0; c--)
		{
			_putchar(s[c]);
		}
	_putchar('\n');
}
