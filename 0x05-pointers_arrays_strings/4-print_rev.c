#include "main.h"

/**
 * print_rev - print reverse string
 * @s: string value
 * Return: success
 */

void print_rev(char *s)

{
	int dio;

	while (s[dio] != '\0')
	{
		dio++;
	}

	for (dio -= 1; dio >= 0; dio--)
	{
		_putchar(s[dio]);
	}
	_putchar('\n');

}
