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

	if (d == NULL)
                return;

        if (d->name == NULL)
                name = "(nil)";
	else
		name = d->name;
 	if (d->owner == NULL)
		owner = "(nil)";
	else
		owner = d->owner;

	printf("Name: %s\n", name);
    	printf("Owner: %s\n", owner);

	if (d->age >=0)
		printf("Age: (nil)");
	else
		printf("Age: %f\n", age);
}
