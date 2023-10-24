#include "main.h"
#include <stddef.h>

/**
 * _strstr - function that Locates a substring in a string.
 * @haystack: The string to search within.
 * @needle: The substring to search for.
 *
 * Return: A pointer or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	    while (*haystack)
		        {
				        char *h = haystack;
					        char *n = needle;

						        while (*n && *h == *n)
								        {
										            h++;
											                n++;
													        }

							        if (*n == '\0')
									            return haystack;

								        haystack++;
									    }

	        return NULL;
}
