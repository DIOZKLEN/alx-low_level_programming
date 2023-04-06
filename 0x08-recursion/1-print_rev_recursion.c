#include "main.h"

/**
 * _print_rev_recursion - print reverse string
 * @s: input
 * Return: Success
 */

void _print_rev_recursion(char *s)

{

	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		s--;
		_putchar(*s);
	}
	return;
}