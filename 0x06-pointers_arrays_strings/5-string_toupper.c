/**
 * string_toupper - function that changes lowercase to uppercase.
 * @str: the string.
 *
 * Return: A pointer to the converted string.
 */
char *string_toupper(char *str)
{
	char *word = str;

	while (*str != '\0')
	{
	if (*str >= 'a' && *str <= 'z')
	{
	*str = *str - 'a' + 'A';
	}
	str++;
	}

	return word;
}
