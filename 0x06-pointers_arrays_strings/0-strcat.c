/**
 * _strcat - function that concatenate two strings.
 * @dest: The resulting location of the string.
 * @src: the source string.
 *
 * Return: A pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;

	while (*dest != '\0')
	{
	dest++;
	}

	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}

	*dest = '\0';

	return (result);
}
