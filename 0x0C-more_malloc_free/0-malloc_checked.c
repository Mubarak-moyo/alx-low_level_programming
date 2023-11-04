#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked -  function that allocates memory.
 * @b: The amount of bytes.
 *
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
	exit(98);
	}

	return (ptr);
}

