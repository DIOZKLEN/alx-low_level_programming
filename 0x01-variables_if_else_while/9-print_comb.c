#include <stdio.h>

/**
 * main - for loop cmb
 * Return: 0.
 *
 */

int main(void)

{
	char dio, es, vir;

	es = ' ';
	vir= ',';

	for (dio = '0'; dio <= '9'; dio++)
	{	if (dio != '9')
		{
			putchar(dio);
			putchar(vir);
			putchar(es);
		}
		else
		{
			putchar(dio);
		}
	}
	putchar('\n');
	return (0);
}

