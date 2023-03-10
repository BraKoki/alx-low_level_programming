#include <stdio.h>
#include "main.h"

/**
 * main - ts the number of arguments passed into it.
 * @argc: number of arguments
 * @argc: array of arguments
 * Return: Always 0 (GoodGame)
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
