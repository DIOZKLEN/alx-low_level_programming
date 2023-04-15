#include <stdio.h>

/**
 * main - Print number of args
 * @argc: count args
 * @argv: char args
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf ("%d\n", argc - 1);
	return (0);
}
