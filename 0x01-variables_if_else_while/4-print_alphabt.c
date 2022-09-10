#include <stdio.h>


/**
*main - Entry point
*
*Description - Prints the alphabet except q and e
*
* Return: Always 0 (Success)
*/

int main(void)
{
char ch;
char hehe = '\n';
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'e')
{
	continue;
}
if (ch == 'q')
{
	continue;
}
putchar(ch);
}
putchar(hehe);
return (0);
}
