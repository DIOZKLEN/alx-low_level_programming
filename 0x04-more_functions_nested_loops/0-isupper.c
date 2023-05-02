#include "main.h"

/**
 * _isupper - if condition when 
 * isupper return 1 else 0
 * @c: char to check
 * Return: Success
 */

int _isupper(int c)

{
	if (c >= 'A' && c <= 'Z')

		return (1);
	else
		return (0);

}
