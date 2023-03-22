#include "function_pointers.h"
/**
 * print_name - a function that print a name
 * @name: the name of the person
 * @f: a pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
