nclude <stdio.h>
#include <stdlib.h>
#include <time.h>


void generateRandomPassword(char *password, int length) {
	    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	        int charsetSize = sizeof(charset) - 1;

		    for (int i = 0; i < length; i++) {
			            int index = rand() % charsetSize;
				            password[i] = charset[index];
					        }

		        password[length] = '\0';
}

int main() {
	    // Initialize the random number generator with the current time
	         srand((unsigned int)time(NULL));
	    
	            int passwordLength = 10; // Set the desired password length
	                char password[passwordLength + 1]; // +1 for the null terminator
	    
	                     generateRandomPassword(password, passwordLength);
	    
	                        printf("Generated Password: %s\n", password);
	    
	                            return 0;
	                     }
