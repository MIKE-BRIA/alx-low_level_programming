#include "main.h"

/**
 * _put_recursion - prints a string followed by a new line
 * @s: input
 * @c: input
 * Return: nothing
 */

void _put_recursion(char *c)
{
	if (*s == '\0')
	{
		_putchar('\n')
			return;
	}
	_putchar(*s);
	s++;
	_put_recursion(s);
}
