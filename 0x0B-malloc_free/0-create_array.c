#include <stdlib.h>

/**
 * create_array-creates an array of chars, initializes it with a specific char
 * @size: The size of the array to create.
 * @c: character which initialize the array.
 *
 * Return: 0(Sucess)
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}

	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < size; i++)
	{
	array[i] = c;
	}

	return (array);
}
