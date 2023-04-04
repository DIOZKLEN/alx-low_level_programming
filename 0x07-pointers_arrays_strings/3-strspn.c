#include "main.h"

/**
 * _strspn - return nbr of bytes in the
 * initial segment
 * @s: pointer
 * @accept: pointer
 * Return: success
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int i, j, count, check;

	count = 0;

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
		{
			return(count);
		}
	}
	return (count);
}
