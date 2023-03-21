#include "main.h"
#include <stdio.h>

/**
 * _islower - if condition when
 * is lower
 * Return: 0
 */

int _islower(int c)

{
	if (!(c >= 'a' && c <= 'z'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
