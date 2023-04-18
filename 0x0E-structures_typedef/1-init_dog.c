#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initialize struct in C
 * @d: struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: Success
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
