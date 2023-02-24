#include "main.h"
/**
 *  print_triangle - a function that prints a triangle
 *  @size: is the size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (size < i + j)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

