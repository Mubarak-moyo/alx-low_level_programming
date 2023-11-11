#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers -  function that prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The numbers of strings passed to the functions.
 * @...: Variable number of integers.
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	num = va_arg(args, int);
	printf("%d", num);

	if (separator != NULL && i < n - 1)
	{
	printf("%s", separator);
	}
	}

	va_end(args);

	printf("\n");
}
