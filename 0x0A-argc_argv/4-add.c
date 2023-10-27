#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Program that adds positive numbers.
 * @argc: The number of command line arguments.
 * @argv: array containing the command line arguments.
 *
 * Return: 0(Success).
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int i, j, num2;

	if (argc < 2)
	{
	printf("0\n");
	return (0);
	}

	for (i = 1; i < argc; i++)
	{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
	if (!isdigit(argv[i][j]))
	{
	printf("Error\n");
	return (1);
	}
	}
	num2 = atoi(argv[i]);
	result += num2;
	}

	printf("%d\n", result);

	return (0);
}
