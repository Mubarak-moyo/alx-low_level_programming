#include "main.h"
#include <stdio.h>

/**
 * _atoi - function that converts a string to an integer.
 * @s: The input string.
 * Return: The integer converted from the string.
 */
int _atoi(char *s)
{
	int result = 0, sign = 1, i = 0;

	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13)) i++;

	if (s[i] == '-' || s[i] == '+') sign = (s[i++] == '-') ? -1 : 1;

	while (s[i] >= '0' && s[i] <= '9') result = result * 10 + (s[i++] - '0');

	return result * sign;
}
