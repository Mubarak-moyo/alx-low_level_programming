#include "main.h"

#include "main.h"

int check_palindrome(char *s, int start, int end) {
	    if (start >= end) {
		            return 1;
			        }
	        if (s[start] != s[end]) {
			        return 0;
				    }
		    return check_palindrome(s, start + 1, end - 1);
}

int get_string_length(char *s) {
	    if (*s == '\0') {
		            return 0;
			        }
	        return 1 + get_string_length(s + 1);
}

int is_palindrome(char *s) {
	    int length = get_string_length(s);
	        if (length <= 1) {
			        return 1;
				    }
		    return check_palindrome(s, 0, length - 1);
}

