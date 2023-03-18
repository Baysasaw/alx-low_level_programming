#include "main.h"
#include <stdlib.h>
int find_sqrt(int n, int i);
/**
 * _sqrt_recursion - a function that return the natural square of a number
 *  @n: the number
 *  Return: the natural square of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 1));
}
/**
 * find_sqrt - the recurses to find the natural square root of
 * a number
 * @n: the number
 * @i: iterator
 * Return: the square root of a number
 */
int find_sqrt(int n, int i)
{
	if (n == i * i)
		return (i);
	if (i * i > n)
		return (-1);
	return (find_sqrt(n, i + 1));
}
