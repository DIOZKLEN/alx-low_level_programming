#include "main.h"

/**
 * _strncpy - copie a string
 * @dest: str value
 * @src: str value
 * @n: byte value
 * Return: Success
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i = 0, j = 0;

	while (src[i++])
	{
		j++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = j; i < n; i++)
	dest[i] = '\0';

	return (dest);
}
