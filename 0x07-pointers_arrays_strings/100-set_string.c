#include "main.h"

/**
 * set_string -  function that sets the value of a pointer to a char.
 * @s: A pointer pointing to a pointer pointing to char (char **)
 * @to: A pointer to char.
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}
