#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: 0 (GoodGame)
 */

int main(void)
{
char c;

c = 'z';

while
(c >= 'a')
{
putchar(c);
c--;
}
putchar('\n');
return (0);
}
