#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 * @str: a string
 */
void puts2(char *str)
{
	int i;
	int j = 0;

	for (; str[j] != '\0'; j++)
	{}
	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
