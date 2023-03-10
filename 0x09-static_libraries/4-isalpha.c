#include "main.h"

/**
 * _isalpha - gives details of isalpha
 * isalpha function that checks for alphabetic character.
 * @c: the character, otherwise
 * Return: 1 if c is al etter, otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
