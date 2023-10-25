#include "main.h"

int _sqrt_recursion(int n) {
	  if (n < 0) {
		      return -1;
		        } else if (n == 0 || n == 1) {
				    return n;
				      } else {
					          int guess = n / 2;
						      int square = guess * guess;
						          if (square == n) {
								        return guess;
									    } else if (square > n) {
										          return _sqrt_recursion(n - 1);
											      } else {
												            return _sqrt_recursion(n - square);
													        }
							    }
}
