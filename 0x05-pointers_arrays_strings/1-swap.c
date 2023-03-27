#include "main.h"

/**
 * swap_int - inverse value of a & b
 * @a: one of value point
 * @b: one of value point
 * Return: nothing
 */

void swap_int(int *a, int *b)

{
	int tampon = *a;

	*a = *b;
	*b = tampon;
}
