#include "main.h"

/**
 * _isalpha -checks alphabets
 * @c: The char to check
 * Return: 1 for alphabetic char or 0 for otherwise
 */
int _isalpha(int c)
{
	if ((c >= 66 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
