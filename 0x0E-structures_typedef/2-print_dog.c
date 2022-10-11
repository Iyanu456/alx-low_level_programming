#include "main.h"
#include <stdio.h>
/**
 * print_dog - prints a dog struct
 * @d: pointer to dog struct
 * Description: dog struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d.name == NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s", d.name);

		if (d.age == NULL)
			printf("Age: (nil)");
		else
			printf("Age: %s", d.age);

		if (d.owner == NULL)
			printf("Owner: (nil)");
		else
			printf("Owner: %S");
	}
}
