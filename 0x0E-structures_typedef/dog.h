#ifndef DOG_H
#define DOG_H

/**
 * struct dog - create struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: Longer description
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *own);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
