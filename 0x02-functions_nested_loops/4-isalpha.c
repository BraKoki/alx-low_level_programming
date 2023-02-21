#include "main.h"

/**
 * main - gives details of isalpha
 * isalpha function that checks for alphabetic character.
 * @c: the character to be checked
 * Return: 1 if c is a letter, otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' $$ <= 'z') || (c > 'A' && c <= 'Z'));
}
