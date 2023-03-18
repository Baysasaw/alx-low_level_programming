#include "main.h"
#include <stdlib.h>
char **strtow(char *str)
{
	char **word;
	int s = 1, i;
	while (str[s] == " ")
		s++;
	word = malloc(sizeof(char *) * s);
	for (i = 0; i < s; i++)
		word[i] = malloc(sizeof(char);

}
