#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Checks and prints if a number is positive, negative or zero
*
*Description - This program prints is positive, is negative, is zero depending on the random number given
*
*Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if ( n > 0 ) {
		printf("%d is positive\n", n);
	} 
	else if ( n < 0 ) {
		printf("%d is negative\n", n);
	}
	else {
		printf("%d is zero\n", n)
	}
	return (0);
}
