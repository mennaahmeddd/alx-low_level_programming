#include "main.h"
/**
 * _strdup - A function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a
 * parameter.
 * @str: An input pointer of the string to copy.
 * Return: Apointer to new string or NULL if it str is NULL
 */
char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;

	/*+1 on the size puts the end of string character*/
	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
	{
		return (NULL);
	}
	else
	{

		for (; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}
