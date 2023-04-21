#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - return the sum of all its parameters
 * @n: parameter
 *
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list dio;
	unsigned int i, sum = 0;

	va_start(dio, n);

	for (i = 0; i < n; i++)
		sum += va_arg(dio, int);

	va_end(dio);

	return (sum);
}
