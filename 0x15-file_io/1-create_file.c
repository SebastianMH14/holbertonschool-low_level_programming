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
	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	while (text_content[i] != '\0')
	{
		i++;
	}
	writ_e = write(fd, text_content, i);
	if (fd == -1)
	{
		return (-1);
	}
	return (1);
}
