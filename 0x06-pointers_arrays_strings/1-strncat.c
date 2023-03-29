#include "main.h"

/**
 * _strncat - concat two nmbre
 * @dest: first value
 * @src: second value
 * @n: byte value
 * Return: success
 */

char *_strncat(char *dest, char *src, int n)

{
	int dio = 0, i = 0;

	while (dest[i++])
	{
		dio++;
	}

	for (i = 0;src[i] && i < n; i++)
	{
		dest[dio++] = src[i];
	}
	return (dest);
}
