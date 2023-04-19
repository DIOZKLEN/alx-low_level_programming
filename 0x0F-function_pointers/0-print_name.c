#include <stdio.h>

/**
 * print_name - write func that print name
 * @name: the name
 * @f: pointer
 *
 * Return: Success
 */

void print_name(char *name, void (*f)(char *))

{
	f(name);
}
