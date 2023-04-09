#include "main.h"
#include <stdio.h>

/**
 * _strcat - concat the string
 * @dest: str value
 * @src: str value
 * Return: success
 */

char *_strcat(char *dest, char *src)

{
	int dio = 0, i;

	while (dest[dio])
	{
		dio++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dio] = src[i];
		dio++;
	}
	dest[dio] = '\0';
	return (dest);
}
