#include "main.h"
void _puts_recursion(char *s)
{
	if(*s == '\0')
	{
		s[y] = '\n';
		break;
	}
	s++;
	_puts_recursion(s);
}
