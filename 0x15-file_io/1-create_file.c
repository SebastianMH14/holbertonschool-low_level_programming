#include "holberton.h"

/**
 *create_file -  function that creates a file
 *@filename: name of file create
 *@text_content: text write to new file
 *
 *Return: return 1 or -1 if fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i, writ_e;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (text_content == NULL)
	{
		return (1);
	}
	if (fd == -1)
	{
		return (-1);
	}
	for (i = 0; text_content[i] != '\0'; i++)
	;

	writ_e = write(fd, text_content, i);
	close(fd);
	if (writ_e == -1)
	{
		return (-1);
	}
	return (1);
}
