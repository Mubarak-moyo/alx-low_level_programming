#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string to concatenate.
 * @s2: The second string to concatenate.
 *
 * Return: returns NULL or returns a pointer to a newly allocated strings.
 *
 */
char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t len_s1, len_s2, total_length;

	if (s1 == NULL)
	{
	s1 = "";
	}

	if (s2 == NULL)
	{
	s2 = "";
	}

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	total_length = len_s1 + len_s2 + 1;

	result = (char *)malloc(total_length);

	if (result == NULL)
	{
	return (NULL);
	}

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
