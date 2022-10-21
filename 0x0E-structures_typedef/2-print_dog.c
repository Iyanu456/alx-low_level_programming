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
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);

}
