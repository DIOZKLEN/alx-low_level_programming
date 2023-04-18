#ifdef _HEADER_
#define _HEADER_
#include <stdio.h>

/**
 * struct dog - creat my first struct
 * @name: name of dog
 * @age: age of dog
 * @owner: ...
 * Description: i will create a new struct
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structure
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
#endif
