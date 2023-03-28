#include "main.h"

/**
 * _strlen - print tall of string
 * @s: strlen value
 * Return: success
 */

int _strlen(char *s)

{
	int str = 0;

	while (*s++)
	{
		str++;
	}

	return (str);
}
