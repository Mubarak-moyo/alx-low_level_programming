#include "main.h"

/**
 * check_palindrome - function that checks if a string is palindrome or not.
 * @s: The string.
 * @start: The start index.
 * @end: The end index.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
	return (1);
	}
	if (s[start] != s[end])
	{
	return (0);
	}
	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * get_string_length - This calculates the length of the string.
 * @s: The input string.
 *
 * Return: String's length.
 */
int get_string_length(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	return (1 + get_string_length(s + 1));
}

/**
 * is_palindrome - checks if a string is palindrome.
 * @s: The string.
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int length = get_string_length(s);

	if (length <= 1)
	{
	return (1);
	}
	return (check_palindrome(s, 0, length - 1));
}
