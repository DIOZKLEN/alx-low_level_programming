#include "main.h"
#include "stdio.h"

/**
 * main - Print all args
 * @argc: args count
 * @argv: args char
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
