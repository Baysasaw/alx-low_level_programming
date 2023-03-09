#include "main.h"
/**
 * _print - a function that prints a string in reverse
 * @s: a string
 */
int length(char *s);
void _print(char *s, int *l);
/**
 * _print_rev_recursion -  function that prints a string in reverse
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	_print(s, length(s));
}

void _print(char *s, int *l)
{

	if (*l == 0)
		_putchar(*s);
	else
	{
		_putchar(*(s + l));
		l--;
		_print((s + l), l);
	}
}
/**
 * length - a function that count the characters
 * @s: string
 * Return: number of characters
 */
int length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		s++;
		return(1 + length(s));
	}
}
