/**
 * rot13 - Encodes a string in rot13 format.
 * @str: the input string.
 *
 * Return: A pointer to the modified sting.
 */
char *rot13(char *str)
{
	int i, j;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
	for (j = 0; alphabet[j] != '\0'; j++)
	{
	if (str[i] == alphabet[j])
	{
	str[i] = rot13[j];
	break;
	}
	}
	}

	return (str);
}
