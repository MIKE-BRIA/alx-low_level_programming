#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sumof allits parameters
 * @n: the number of parameters passed to the function
 * @...: A variable number of the parameters to calculate the sum0
 *
 * Return: if n == 0 - 0
 * otherwise - the sm of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
