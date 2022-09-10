#include <stdio.h>


/**
*main - Entry point
*
*Description - Prints a - z reversed
*
* Return: Always 0 (Success)
*/

int main(void)
{
char i;
char hehe = '\n';
for (i = 'z' ; i >= 'a' ; i--) 
{
      putchar(i);
} 
putchar(hehe);
return (0);
}
