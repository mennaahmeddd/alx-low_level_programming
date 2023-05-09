#include "main.h"

/**
 * _strlen - it returns the length of a string
 * @s: the string whose length to check
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * append_text_to_file - it appends text to a file
 * @filename: name of file to create
 * @text_content: text to write
 * Return: 1 on success 0 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t bytes = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	if (len)
		bytes = write(f, text_content, len);
	close(f);
	return (bytes == len ? 1 : -1);
}
