#include "main.h"
#include <stdlib.h>
#include <stdio.h>
char *str_concat(char *s1, char *s2)
{
	char *_str;
	int i, j;
	j = 0;

	_str = malloc(sizeof(*s1) + sizeof(*s2));
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
	       	_str[j] = *(s1 + i);
		j++;	      
	}

	for (i = 0; *(s2 + i) != '\0'; i++)
        {
               _str[j] = *(s2 + i);
	       j++;
        
	}
	return _str;

}
