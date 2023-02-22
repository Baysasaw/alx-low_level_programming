#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
        char c;
	int a;
	for (a = 1; a <= 10; a++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
