#include <stdio.h>
/**
 * main - A C program that prints the size of various types
 * Return: 0 (GoodGame)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

printf("Size of a char: %lu byte(s)\n", (char)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (int)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (int)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (long int)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (float)sizeof(e));
return (0);
}
