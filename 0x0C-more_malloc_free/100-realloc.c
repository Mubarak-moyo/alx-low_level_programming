#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc -  function that reallocates a memory block using malloc and free.
 * @ptr: Pointer to the initial memory block.
 * @old_size: The initial memory block size.
 * @new_size:  The size of the reallocated memory block.
 *
 * Return: A pointer to the reallocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
	free(ptr);
	return (NULL);
	}

	if (ptr == NULL)
	ptr = malloc(new_size);

	if (new_size == old_size)
	return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
