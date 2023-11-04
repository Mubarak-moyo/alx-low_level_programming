#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array usng malloc.
 * @nmemb: The nuymber of elements in the array.
 * @size: The size of each elements.
 *
 * Return: A pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
	return (NULL);
	}


	for (i = 0; i < nmemb * size; i++)
	{
	((char *)ptr)[i] = 0;
	}

	return (ptr);
}
