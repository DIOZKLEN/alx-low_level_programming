#include <stdio.h>

/**
 * main - for loop cmb
 * Return: 0.
 *
 */

int main(void)

{
	int dio, es, vir;

	es = ' ';
	vir = ',';

	for (dio = '0'; dio <= '9'; dio++)
	{
		putchar(dio);
		if (dio != '9')
		{
			putchar(vir);
			putchar(es);
		}
	}
	putchar('\n');
	return (0);
}

