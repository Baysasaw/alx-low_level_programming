#include "main.h"
/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 * Return: If b is NULL or contains not 0 or 1
 */
unsigned int binary_to_uint(const char *b){
	unsigned int a = 0;
	int l = 0;

	if (b[l] == '\0')
		return (0);

	while((b[l] == '0') ||(b[l] == '1'))
	{
		a <<= 1;
		a += b[l] - '0';
		l++;
	}

	return (a);
}
