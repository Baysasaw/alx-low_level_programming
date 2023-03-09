#include "main.h"
/**
 * factorial - a function factorial a number
 * n: a number
 * Return:  the factorial of a given number
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * (factorial(n - 1)));
}
