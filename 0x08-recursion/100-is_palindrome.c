/**
 * file: 100-is_palindrome
 * Auth: DIOZKLEN
 */


#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * find_strlen - Return len of string
 * @s: the string
 *
 * Return: len of str
 */

int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}
	return (len);
}
