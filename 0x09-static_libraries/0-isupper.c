#include "main.h"

/**
 * _isupper - A function that checks for uppercase character
 *
 * @c: checks input of function
 *
 * Return: 1 if c is true else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
