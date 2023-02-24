#include "main.h"
/**
 * _isdigit - a function that checks a digit
 * @c: ASCii value
 * Return: if c is a digit 1 otherwise 0
 */
int _isdigit(int c)
{
	if (48 <= c && 57 >= c)
		return (1);
	else
		return (0);
}

