#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 * @name: name of dog
 * @owner: dog owner
 * @age: dog's age
 * Description:construct a dog
 */

struct dog
{
	char *name;

	char *owner;

	float age;
};

void init_dog(struct dog *d, char *name, float age, char *ownwer);
#endif
