#include "main.h"

/**
 * _strspn - return the number of bytes
 * in the initial segment
 * @s: pointer
 * @accept: pointer
 * Return: Success
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int i, j, count = 0, check;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				check = 1;
			}
		}
		if (check == 0)
			return (count);
	}
	return (count);
}
