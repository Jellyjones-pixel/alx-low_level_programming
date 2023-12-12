#include "main.h"
#include <stdio.h>

/**
 * _isalpha - checks whether the character is alphabetic
 * @c: a character variable
 * Return: 1 if true and 0 if false
 */

int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
