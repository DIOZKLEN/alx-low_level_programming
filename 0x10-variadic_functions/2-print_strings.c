#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: ...
 * @n: ...
 *
 * Return: nil
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list dio;
	unsigned int i;
	char *str;

	va_start(dio, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(dio, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (n != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(dio);
}
