#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The highest number of charecters to concatenate.
 *
 * Return: A pointer to the new concatenetad string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int ls1, ls2;
	char *result;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	ls1 = strlen(s1);
	ls2 = strlen(s2);

	if (n >= ls2)
	n = ls2;

	result = malloc(ls1 + n + 1);

	if (result == NULL)
	return (NULL);

	strcpy(result, s1);
	strncat(result, s2, n);

	return (result);
}
