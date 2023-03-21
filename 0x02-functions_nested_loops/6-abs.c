#include "main.h"

/**
 * _abs - get absolute value
 * @n: variable absolute
 * Return: success
 */

int _abs(int n)

{

	if (n > 0)
	{
		return (n);
	}
	else
	{
		n = -n;
		return (n);
	}
}
