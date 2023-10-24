#include "main.h"

/**
 * _strchr - This function locates a character in a string.
 * @s: A pointer to the string to search.
 * @c: The character to locate.
 *
 * Return: A pointer to the charcter or null
 */
char *_strchr(char *s, char c)
{
	    while (*s != '\0')
		        {
				        if (*s == c)
						            return s;
					        s++;
						    }
	        
	        if (c == '\0')
			        return s;

		    return NULL;
}
