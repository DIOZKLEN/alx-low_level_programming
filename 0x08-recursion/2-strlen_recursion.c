#include "main.h"

/**
 * _strlen_recursion - len of recursion
 * @s: input
 * Return: Success
 */

int _strlen_recursion(char *s)

{
	int count;

	while (*s++)
	{
		count++;
		_strlen_recursion(s);
	}
	return (count);
}
