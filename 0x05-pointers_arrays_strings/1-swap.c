#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 * @a: the first integer to be swaped
 * @b: the second integer to be swaped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/*the function that swaps the value of two integers */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
