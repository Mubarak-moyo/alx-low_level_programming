/**
 * _strcmp - compares two strings.
 * @s1: The first string.
 * @s2: the second string.
 *
 * Return: Any of the conditions met.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
	if (*s1 != *s2)
	{
	return (*s1 - *s2);
	}
	s1++;
	s2++;
	}

	return (0);
}
