#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - print 
 * alphabet at 10 time
 * Return: success
 */

void print_alphabet_x10(void)

{
	int i, dio;

	for (i = 0; i< 10; i++)
	{
	for (dio = 'a'; dio <= 'z'; dio++)
	_putchar(dio);
	_putchar('\n');
	}
}
