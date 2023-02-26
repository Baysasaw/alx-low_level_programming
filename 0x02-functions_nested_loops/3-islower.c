#include "main.h"
/**
 * _islower - check the code
 * @c: a character
 * Return: 1 if if c is lowercase otherwise 0
 */
int _islower(int c)
{
	if (97 <= c && 122 >= c)
	{
		return (1);
	}
	else
		return (0);
}
