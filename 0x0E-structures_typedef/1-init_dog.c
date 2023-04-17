#include "dog.h"

/**
 * init_dog - initializes afdsfs dog
 * @d: the dog to initfdsfs
 * @name: the dog's namefdssd
 * @age: dog's age
 * @owner: owner's name
 *
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
