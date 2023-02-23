#include "main.h"

/**
 * _isdigit - check if a character is a digit
 * @x: numbet to check
 * Return: 1 for digit 0 for else
 */

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
	return (1);
	}
	return (0);
}
