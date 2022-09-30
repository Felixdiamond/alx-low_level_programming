#include "main.h"
#include <stdio.h>
/**
 * main - Prints the name of the program
 * @argc: Number of command line arguments
 * @argv: Array name
 * exit: EXIT_SUCCESS
 */

int main (int argc, char *[argv])
{
	printf("%s \n", argv[0]);
	
	exit(EXIT_SUCCESS);
}
