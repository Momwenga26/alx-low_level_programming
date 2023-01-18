#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: the structure is for dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

#endif
