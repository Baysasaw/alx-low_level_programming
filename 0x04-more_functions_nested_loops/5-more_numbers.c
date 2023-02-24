#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int x;
	int y;
	int z = 0;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				z = x - 10;
				_putchar('1');
			}
			else
				z = x;
			_putchar(z + '0');
		}
		_putchar('\n');
	}
}
