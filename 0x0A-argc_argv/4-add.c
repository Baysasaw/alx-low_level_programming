#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that Add two numbers
 * @argc:number of arguments
 * @argv:array of arguments
 * Return:multiplies two numbers
 */
int main(int argc, char *argv[])
{
	int i, add;

	for (i = 1; i < argc; i++)
	{
		if (!(atoi(argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		add = add + atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
