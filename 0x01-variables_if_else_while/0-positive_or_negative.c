#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - if fonction
 * "write fonction that return
 * aleatory number"
 * Return: Always 0.
 */


int main(void)
        
{       
        int n;


	srand(time(0));
	n = rand() - RAND_MAX /2;

        if (n > 0) {
                printf("%d is positive\n", n);
        }       
        else if (n == 0) {
                printf("%d is zero\n", n);
        }       
        else if (n < 0) {
                printf ("%d is negative\n", n);
        }       
        return (0);
}
