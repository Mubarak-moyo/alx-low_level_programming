/**
 * leet - function that encodes a string.
 * @str: the string.
 *
 * Return: A pointer to the mainpulated string.
 */
char *leet(char *str)
{
	char *s = str;
	char *leet_replace = "aAeEoOtTlL";
	char *leet_encoding = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; leet_replace[j] != '\0'; j++)
	{
	if (s[i] == leet_replace[j])
	{
	s[i] = leet_encoding[j];
	break;
	}
	}
	}

	return (str);
}
