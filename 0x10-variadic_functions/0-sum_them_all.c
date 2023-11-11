#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that sums all of its parameters.
 * @n: This is the number of arguments.
 * @...: Represents the variable number of arguments.
 *
 * Return: The sum.
 */
int sum_them_all(const unsigned int n, ...)
{
	int result;
	unsigned int i;
	va_list	args;

	if (n == 0)
	{
	return (0);
	}

	result = 0;
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	result += va_arg(args, int);
	}

	va_end(args);

	return (result);
}
