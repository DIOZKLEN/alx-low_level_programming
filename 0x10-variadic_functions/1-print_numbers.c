#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print number
 * @separator: ...
 * @n: numbers
 *
 * Return: Success
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list dio;

	unsigned int i;

	va_start(dio, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(dio, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(dio);
}
