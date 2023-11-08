#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator - function that runs a function on each element of an array
 * @array: The array to be processed.
 * @size: the size of the array.
 * @action: the pointer to the function to be executed on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
		action(array[i]);
		}
	}
}
