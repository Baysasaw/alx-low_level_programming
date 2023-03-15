#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int **alloc_grid(int width, int height)
{
	if (width < 0 || height < 0)
	{
		return (NULL);
	}
	else
	{
		int i, j;
		int **t;
		t = malloc(sizeof(int) * (width * height));
		for(i = 0; i < height; i++)
		{
			for(j = 0; j < width; j++)
			{
				t[i][j] = 0;
			}
		}
		return 0;
	}
}
