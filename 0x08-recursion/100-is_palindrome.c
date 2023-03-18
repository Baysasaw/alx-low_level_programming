#include "main.h"
#include <stdlib.h>
int len(int i, char *str);
int _palindrome(int i, int j, int l, char *str);
/**
 * is_palindrome - a function that chack if a string is palindrome
 * @s: the string
 * Return: 1 if a string is a palindrome
 */
int is_palindrome(char *s)
{
	int l = len(0, s);

	return (_palindrome(0, l - 1, l, s));
}
/**
 * len - a function that calculate the length of a string
 * @i: iterator
 * @str: the string
 * Return: the length of a string
 */
int len(int i, char *str)
{
	if (!(str[i]))
	{
		return (i);
	}
	return (len(i + 1, str));
}
/**
 * _palindrome - a function that iterator
 * @i: itetator from the first index  of a string
 * @j: iterator from last index of a  string
 * @l: the length of the string
 * @str: a string
 * Return: 1 if the string is palindrome if not 0
 */
int _palindrome(int i, int j, int l, char *str)
{
	if (i == l)
		return (1);
	if (str[i] != str[j])
		return (0);
	return (_palindrome(i + 1, j - 1, l, str));
}
