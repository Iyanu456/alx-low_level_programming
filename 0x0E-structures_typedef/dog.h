#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 * @name: name of dog
 * @owner: dog owner
 * @age: dog's age
 * Description:constructs  a struct
 */

void init_dog(struct dog *d, char *name, float age, char *ownwer);
void print_dog(struct dog *d);
#endif
