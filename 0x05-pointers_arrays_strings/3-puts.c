#include "main.h"
/**
 * _puts - prints a string
 * @str: the string to print
 * Return: void
 */

void _puts(char *str)

{
	int _putchar(char c);

	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
