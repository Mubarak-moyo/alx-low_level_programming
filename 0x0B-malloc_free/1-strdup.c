#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that duplicates a string.
 * @str - the string
 *
 * Return: NULL or a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
	return (NULL);
	}

	char *duplicate = (char *)malloc(strlen(str) + 1);

	if (duplicate == NULL)
	{
	return (NULL);
	}

	strcpy(duplicate, str);

	return (duplicate);
}
