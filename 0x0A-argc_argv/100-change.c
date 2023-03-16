#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the minimum number
 * of coins to make change for an amount of money
 * @argc:number of arguments
 * @argv:array of arguments
 * Return:multiplies two numbers
 */
int main(int argc, char *argv[])
{
	int money, t;

	if (argc == 2)
	{
		int i, n;
		int x[] = {25, 10, 5, 2, 1};

		money = atoi(argv[1]);
		for (i = 0; x[i]; i++)
		{
			n = money / x[i];
			money -= x[i] * n;
			t += n;
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", t);
	return (0);
}
