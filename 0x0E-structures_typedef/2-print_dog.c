#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print struct dog
 * @d: struct
 * Return: Success
 */

void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf ("Age: %f\n", (d->age) ? d->age : 0);
		printf("owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}