#include "main.h"
#include <stdio.h>

int _prime_check(int n, int i);

/**
 * is_prime_number - filter prime num
 * @n: prime number
 *
 * Return: success
 */

int is_prime_number(int n)

{
	return (_prime_check(n, 1));
}

/**
 * _prime_check - prime math calcul
 * @n: prime number
 * @i: div
 *
 * Return: 1 if isprime or 0 otherwise
 */

int _prime_check(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);
	return (_prime_check(n, i + 1));
}
