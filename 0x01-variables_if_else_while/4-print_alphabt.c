#include <stdio.h>

/**
 * main - for loop alphabt
 * Return: (Success)
 *
 */

int main(void)

{
	char dio;

	for (dio = 'a'; dio < 'z'; dio++)
	{
		if (dio != 'e' && dio != 'q')
		putchar(dio);
	}
	putchar('\n');
	putchar('\n');
	return (0);
}
