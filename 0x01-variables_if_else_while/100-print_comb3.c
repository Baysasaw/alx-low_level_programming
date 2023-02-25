#include <stdio.h>
/**
 * main - all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((j - i) > 0)
			{
				if (!(i == 0 && j == 1))
				{
					putchar(',');
					putchar(' ');
				}
				putchar(i + '0');
				putchar(j + '0');
			}
		}
	}
	putchar('\n');
	return (0);
}
