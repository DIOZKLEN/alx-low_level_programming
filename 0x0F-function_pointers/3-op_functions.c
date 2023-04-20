#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - add number
 * @a: input
 * @b: input
 *
 * Return: Nothing
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub number
 * @a: input
 * @b: input
 *
 * Return: Nothing
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplicate number
 * @a: input
 * @b: input
 *
 * Return: Nothing
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divise number
 * @a: input
 * @b: input
 *
 * Return: Nothing
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
	}
	return (a / b);
}

/**
 * op_mod - modulo number
 * @a: input
 * @b: input
 *
 * Return: Nothing
 */

int op_mod(int a, int b)
{
	 if (b == 0)
        {
                printf("Error\n");
        }
	return (a % b);
}
