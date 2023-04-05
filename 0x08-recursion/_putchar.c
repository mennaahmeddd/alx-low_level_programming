#include <unisted.h>

/**
 * _putchar - writes the character c to stdout
 * 0c: the character to print
 *
 * Return : On success 1
 * Return: On error -1
 */
int _putchar(char c)
	return (write(1, &c, 1));
