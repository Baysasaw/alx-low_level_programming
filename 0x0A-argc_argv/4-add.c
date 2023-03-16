#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - a program that Add two numbers
 * @argc:number of arguments
 * @argv:array of arguments
 * Return:multiplies two numbers
 */
int main(int argc, char *argv[])
{
	unsigned int add;
	int i;

	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]) || (atoi(argv[i]) < 0))
		{
			printf("Error\n");
			return (1);
		}
		if (atoi(argv[i]))
			add = add + atoi(argv[i]);

	}
	printf("%d\n", add);
	return (0);
}
