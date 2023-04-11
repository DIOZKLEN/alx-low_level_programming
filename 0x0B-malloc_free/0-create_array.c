#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of char
 * @size: input
 * @c: character
 * Return: NULL if size = 0, SUCCESS or NULL if that fail
 */

char *create_array(unsigned int size, char c)

{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return(NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
