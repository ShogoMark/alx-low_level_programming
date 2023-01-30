#ifndef __DOG_H__
#define __DOG_H_

#include <stdio.h>

/**
 * struct dog - defines a new type
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* __DOG_H__ */
