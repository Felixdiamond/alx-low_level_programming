#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	short int c;
	char d;
	float f;

	printf("Size of an interger(on 64bit): %dbyte(s) (signed)", sizeof(a));
	printf("Size of a long_interger(on 64bit): %ldbyte(s) (signed)", sizeof(b));
	printf("Size of a short_interger(on 64bit): %hdbyte(s) (signed)", sizeof(c));
	printf("Size of a char(on 64bit): %cbyte(s) (signed)", sizeof(d));
	printf("Size of a float(on 64bit): %fbyte(s) (signed)", sizeof(f));
	return (0);
}
