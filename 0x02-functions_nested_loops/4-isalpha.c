#include "main.h"

/**
 * _isalpha - if condition
 * when this is alphabetic
 * @c: character checked
 * Return: 0
 */

int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);	
	}
	else
	{
	return (0);
	}
}
