#include "main.h"

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: number to calculate the square roof
 * Return: results of the square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - have a natural square root
 * @n: number of calculate the sqaure root
 * @i: iterator
 * Return: results of the square root.
 */

int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt_recursion(n, i + 1));
}
