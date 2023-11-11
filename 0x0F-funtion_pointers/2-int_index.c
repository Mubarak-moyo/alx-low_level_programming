#include "function_pointers.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * int_index - function that searches for an integer.
 * @array: the array to be searched.
 * @size: the number of elements in the array.
 * @cmp: a pointer to a function used to compare values.
 *
 * Return: -1 if no elements matches or size <=0
 * or the index of the first element for which cmp does not return 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size > 0)
	{
	int i;

	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]) != 0)
	{
	return (i);
	}
	}
	}

	return (-1);
}
