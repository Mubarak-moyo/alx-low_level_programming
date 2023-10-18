/**
 * leet - function that encodes a string.
 * @str: the string.
 *
 * Return: A pointer to the mainpulated string.
 */
char *leet(char *str) {
	    int i, j;
	        char leet_map[] = "aAeEoOtTlL";
		    char leet_replace[] = "44337711";

		        for (i = 0; str[i] != '\0'; i++) {
				        for (j = 0; leet_map[j] != '\0'; j++) {
						            if (str[i] == leet_map[j]) {
								                    str[i] = leet_replace[j];
										                    break;
												                }
							            }
					    }

			    return (str);
}
