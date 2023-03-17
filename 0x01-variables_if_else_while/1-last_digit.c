#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - if condition
 * the last digit
 * Return: Always (Success)
 */

int main(void)

{
	int n;
	int lastdigit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
	{
		printf("Last digit of %d is %d\n and is greater than 5\n", n,lastdigit);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d\n and is 0\n", n,lastdigit);
	}
	else
	{
		printf("Last digit of %d is %d\n and is less than 6 and not 0\n", n,lastdigit);
	}
	return (0);
}
