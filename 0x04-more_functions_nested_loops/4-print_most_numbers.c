#include "main.h"

/**
 * print_most_numbers - print the numbers since 0 upto 9
 * Description: prints the number excluding 7 and 4
 * Return: The numbers since 0 to 9
 */

void print_most_numbers(void)
{
	int x = 0;

	for (; x <= 2 || x++;)
	{
	if (x == 2 || x == 4)
	{
	continue;
	}
	else
	{
	_putchar(x + '0');
	}
	}
	_putchar('\n');
}
