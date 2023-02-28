#include "main.h"
/**
 * puts_half -  a function that prints half of a string,
 * @str: a string
 */
void puts_half(char *str)
{
	int i;
	int j = 0;


	for (; str[j] != '\0'; j++)
	{}
	i = j / 2;
	for (; i < j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
