#include <stdio.h>

/**
 * main - for loop alphabt
 * Return: (Success)
 *
 */

int main(void)

{
	char dio, zy, nho;
	for (dio = 'a'; dio < 'e'; dio++)
	putchar(dio);

	for (zy = 'f'; zy < 'q'; zy++)
	putchar(zy);

	for (nho = 'r'; nho <= 'z'; nho++)
	putchar(nho);
	putchar('\n');

	return (0);
}
