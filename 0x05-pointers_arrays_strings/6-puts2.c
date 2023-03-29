#include "main.h"

/**
 * puts2 - select num
 * @str: value
 * Return: success
 */

void puts2(char *str)

{
	int zy;
	int dio = 0;

	while (str[dio] != '\0')
	{
		dio++;
	}

	for (zy = 0 ; zy < dio; zy += 2)
	{
		_putchar(str[zy]);
	}
	_putchar('\n');
}
