#ifndef MAIN_H
#define MAIN_H
void init_dog(struct dog *d, char name, float age, char owner);
struct dog
{
	char *name;

	char *owner;

	float age;
};
#endif
