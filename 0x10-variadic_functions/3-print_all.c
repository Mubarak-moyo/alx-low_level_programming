#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/* This are the function prototypes */
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed to the function.
 * @...: variable number of arguments.
 *
 */
void print_all(const char * const format, ...)
{
	const char *format_ptr = format;
	int is_first = 1;

	va_list args;
	va_start(args, format);

	while (*format_ptr)
	{
	if (!is_first)
	printf(", ");
	switch (*format_ptr)
	{
	case 'c':
		print_char(args);
		break;
	case 'i':
		print_int(args);
		break;
	case 'f':
		print_float(args);
		break;
	case 's':
		print_string(args);
		break;
	default:
		break;
	}
	
	format_ptr++;
	is_first = 0;
	}

	va_end(args);
	printf("\n");
}

/* This is the implementation of the functions */
void print_char(va_list args)
{
	char c = va_arg(args, int);
	printf("%c", c);
}

void print_int(va_list args)
{
	int i = va_arg(args, int);	
	printf("%d", i);
}

void print_float(va_list args)
{
	float f = (float)va_arg(args, double);
	printf("%f", f);
}

void print_string(va_list args)
{
	char *str = va_arg(args, char *);
	if (str == NULL)
	{
	printf("(nil)");
	}
	else
	{
	printf("%s", str);
	}
}
