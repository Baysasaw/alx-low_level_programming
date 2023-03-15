#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers
 * @argc:number of arguments
 * @argv:array of arguments
 * return:multiplies two numbers
 */
int main(int argc, char *argv[])
{
	int mult;

	if (argc == 3)
	{
		mult = atoi(argv[1]) + atoi(argv[2]);
		printf("%d", mult);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
