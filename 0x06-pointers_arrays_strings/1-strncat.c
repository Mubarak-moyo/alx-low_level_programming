/**
 * _strcat - function that concatenate two strings.
 * @dest: The resulting location of the string.
 * @src: the source string.
 *
 * Return: A pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
	dest++;
	}

	while (*src != '\0' && n > 0)
	{
	*dest = *src;
	dest++;
	src++;
	n--;
	}

	*dest = '\0';

	return (result);
}
