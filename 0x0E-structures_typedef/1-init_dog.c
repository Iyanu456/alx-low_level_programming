#include "main.h"
/**
 * init_dog - initializes a dog struct
 * @d: pointer to dog struct
 * @name: name of dog struct
 * @age: age of dog
 * @owner: owner of dog
 * Description: dog struct
 * Return: void
 */
struct dog
{
	char *name;

	float age;

	char *owner;
};

void int_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
