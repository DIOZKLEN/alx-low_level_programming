#include <stdio.h>

/**
 * main - print alphabet another
 * void
 * Return: Success
 */

void print_alphabet(void)

{
	char dio;

	for (dio = 'a'; dio <= 'z'; dio++)
	putchar(dio);
	putchar('\n');
}

int main(void)

{
	print_alphabet();
	return (0);
}
