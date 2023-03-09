#include "main.h"
/**
 * _print - a function that prints a string in reverse
 * @s: a string
 */
void _print(char *s)
{
	if (*s == '\n')
		_putchar(*s);
	else
	{
		_putchar(*s);
		s--;
		_print(s);
	}
}
/**
 * length - a function that count the characters
 * @s: string
 * Return: number of characters
 */
char *length(char *s)
{
	if (*s != '\0')
	{
		s++;
		s = length(s);
	}
	return (s);
}
/**
 * _print_rev_recursion -  function that prints a string in reverse
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	s = length(s);
	_print(s);
}
