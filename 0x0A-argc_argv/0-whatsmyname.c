#include <stdio.h>
#include "main.h"

/**
 * main - prints its name
 * @argc: number of agruments
 * @argv: array of agruments
 * Return: Always 0 (GoodGame)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
