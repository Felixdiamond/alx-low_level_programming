#include <stdio.h>

/**
*main - Entry point
*
*Description - Prints hexadecimal
*
* Return: Always 0 (Success)
*/

int main(void)
{
char ch;
char hehe = '\n';
int n;

for (n = 0; n < 10; n++)
{
putchar(48 + n);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar(hehe);
return (0);
}
