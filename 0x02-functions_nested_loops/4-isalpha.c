#include "main.h"
/**
 * _isalpha - a function that checks for alphabetic character
 * @c: alphabetic character
 * Return: 1 if it is a letter otherwise 0
 */
int _isalpha(int c)
{
	if ((65 <= c && 90 >=  c) || (97 <= c && 122 >= c))
	{
		return (1);
	}
	else
		return (0);

}
