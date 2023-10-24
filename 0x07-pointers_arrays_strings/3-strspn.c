#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: the string to search.
 * @accept: The string containing the characters to match.
 *
 * Return:  the number of bytes in the initial segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	    unsigned int count = 0;

	        while (*s)
			    {
				            int match = 0;
					            char *temp = accept;

						            while (*temp)
								            {
										                if (*s == *temp)
													            {
															                    count++;
																	                    match = 1;
																			                    break;
																					                }
												            temp++;
													            }

							            if (!match)
									                return count;

								            s++;
									        }

		    return count;
}

