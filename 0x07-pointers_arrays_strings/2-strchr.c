#include "main.h"
#include <stdio.h>

/**
 * _strchr - return pointer to the
 * first occurence of character
 * @s: pointer
 * @c: character
 * Return: null
 */

char *_strchr(char *s, char c)

{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
