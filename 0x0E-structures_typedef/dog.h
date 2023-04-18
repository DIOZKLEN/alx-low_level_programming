#ifndef DOG_H
#define DOG_H

/**
 * struct dog - creat my first struct
 * @name: name of dog
 * @age: age of dog
 * @owner: ...
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

void *new_dog(char *name,float age, char *owner);

#endif
