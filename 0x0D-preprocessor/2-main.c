#include <stdio.h>

/**
 * main - Starting point for the program.
 * This function prints the name of the file it was compiled from.
 *
 * Return: 0(Success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
