#include <stdio.h>

/**
 * main - for loop alphabet
 * Return: (Success)
 *
 */

int main(void)

{
	char dio, zy;

	for (dio = 'a'; dio <= 'z'; dio++)
	putchar(dio);

	for (zy = 'A'; zy <= 'Z'; zy++)
	putchar(zy);
	putchar('\n');
	return (0);
}
