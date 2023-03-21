#include "main.h"

/**
 * _abs - Compute absolute value of an integer
 *
 * @n: checks input of function
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
