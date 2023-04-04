#include "main.h"

/**
 * _memset - fills n pointed by s
 * @s: pointer
 * @b: char value
 * @n: dynamic value
 * Return: Success
 */

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;
	for (i = 0; i < n; i++)
	s[i] = b;
	return (s);
}
