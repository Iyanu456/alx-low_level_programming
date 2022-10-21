#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - initilizes a dog
 * @d: new dog struct
 * Description: initiali
 */

void print_dog(struct dog *d)
{
	char *name;

	float age;

	char *owner;

	name = d->name;
	owner = d->owner;
	age = d->age;

	if (d == 0)
                return;

        if (name == NULL)
                name = "(nil)";
	else
		name = d->name;
 	if (owner == NULL)
		owner = "(nil)";
	else
		owner = d->owner;

	printf("Name: %s\n", name);
    	printf("Owner: %s\n", owner);

	if (age >=0)
		printf("Age: (nil)");
	else
		printf("Age: %f\n", age);
}
