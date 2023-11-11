#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - fucntion that free dogs.
 * @d: pointer to the struct dog.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);

	d->name = NULL;
	d->owner = NULL;

	free(d);
	}
}
