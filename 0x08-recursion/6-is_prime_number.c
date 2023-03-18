#include "main.h"
#include <stdlib.h>
int chack_prime_number(int i, int n);
/**
 * is_prime_number - a function that chack if it is a prime number
 * @n: the number
 * Return: 1 if it is prime number
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (chack_prime_number(2, n));
}
/**
 * chack_prime_number - a function that chack if the number is prime number
 * @i: iterator
 * @n: the number
 * Return: 1 if the number is prime
 */
int chack_prime_number(int i, int n)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n == i)
		return (1);
	return (chack_prime_number(i + 1, n));
}
