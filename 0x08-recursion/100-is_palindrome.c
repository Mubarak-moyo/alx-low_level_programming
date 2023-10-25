#include "main.h"

int is_palindrome_recursive(char *s, int start, int end) {
	    if (start >= end) {
		            return 1;
			        }

	        if (s[start] != s[end]) {
			        return 0;
				    }

		    return is_palindrome_recursive(s, start + 1, end - 1);
}

int is_palindrome(char *s) {
	    int length = 0;
	        while (s[length] != '\0') {
			        length++;
				    }

		    if (length <= 1) {
			            return 1;
				        }

		        return is_palindrome_recursive(s, 0, length - 1);
}
