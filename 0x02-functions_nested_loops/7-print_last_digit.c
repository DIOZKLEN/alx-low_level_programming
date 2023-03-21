#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - get last digit
 * of any number
 * @n: variable
 * Return: success
 */

int print_last_digit(int n)

{
	int m;
	m = n % 10;
	if (m < 0)
	{
		m = m * -1;
	}
	_putchar(m + '0');
	return (m);
}
