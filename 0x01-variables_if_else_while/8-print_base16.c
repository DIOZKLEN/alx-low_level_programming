#include <stdio.h>

/**
 * main - for loop nmbre
 * print base 16
 * Return: 0.
 */

int main(void)

{
	int n, dio;

	for (dio = '0'; dio <= '9'; dio++)
	putchar(dio);

	for (n = 'a'; n <= 'f'; n++)
	putchar(n);
	putchar('\n');
	return (0);
}


