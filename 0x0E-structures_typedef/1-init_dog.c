#include <stdio.h>
#include "dog.h"

/**
 * init_dog - function that initializes the variable of type struct dog.
 * @name: name of teh dog.
 * @owner: owner of the dog.
 * @age: age of the dog.
 * @d: a pointer to the struct dog variable to be initialized.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
