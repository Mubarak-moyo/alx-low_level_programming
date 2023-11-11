#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This is the code that generates the password.
 *
 * Return: 0(Success)
 */
int main(void)
{

	const char charset[] = "abcdefgpqrstuvwxyzEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int length = 10;
	char password[11];
	int i;

	srand(time(NULL));

	for (i = 0; i < length; i++)
	password[i] = charset[rand() % (sizeof(charset) - 1)];
	password[length] = '\0';

	printf("Password: %s\n", password);

	return (0);
}
