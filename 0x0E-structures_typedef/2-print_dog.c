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
        if (d == 0)
                return;

        if (d->name == NULL)
		
                printf("Name: (nil)");
	else
	{
                printf("Name: %d\n", d->name);
		printf("Age: %f\n", d->age);
	}
        if (d->owner == NULL)
		
                printf("Owner: (nil)");
	
        else
		
                printf("Owner: %d\n", d->owner);
	
}

    
