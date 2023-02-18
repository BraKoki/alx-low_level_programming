#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: 0 (GoodGame)
 */
int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z')
		{
		if ((c != 'q' && c != 'e') && c <= 'z')
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
