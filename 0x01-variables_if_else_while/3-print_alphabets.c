#include <stdio.h>

/**
*main - Entry point
*
*Description - Prints the alphabet in lowercase and then uppercase
*
* Return: Always 0 (Success)
*/

int main(void)
{
char ch;
char hehe = '\n';
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
	putchar(ch);
}
putchar(hehe);
return (0);
}
