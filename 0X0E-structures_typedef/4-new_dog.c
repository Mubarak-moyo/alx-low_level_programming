#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog.
 * @name: The name of the dog.
 * @owner: owner of the dog.
 * @age: age of the dog.
 *
 * Return: NULL if memory allocation fails or a pointer if it succeeds.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr = (dog_t *)malloc(sizeof(dog_t));

	if (new_dog_ptr == NULL)
	{
	return (NULL);
	}


	new_dog_ptr->name = strdup(name);
	new_dog_ptr->owner = strdup(owner);

	if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL)
	{
	free(new_dog_ptr->name);
	free(new_dog_ptr->owner);
	free(new_dog_ptr);
	return (NULL);
	}


	new_dog_ptr->age = age;

	return (new_dog_ptr);
}
