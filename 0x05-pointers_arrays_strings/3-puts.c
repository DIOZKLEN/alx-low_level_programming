#include "main.h"

/**
 * _puts - print strings
 * @str: char value
 * Return: success
 */

void _puts(char *str)

{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
