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
	if (j % 2 == 0)
		i = j / 2;
	else
	{
		i = (j - 1) / 2;
		i = i + 1;
	}
	for (; i < j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
