#include "holberton.h"

/**
 *read_textfile - reads a text file and prints it to the POSIX standard output
 *@filename: file to read
 *@letters: content of the file
 *Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int  fd;
	ssize_t rea_d, writ_e;
	char *buff;

	buff = malloc(sizeof(char) * letters);

	if (buff == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);

		if (fd == -1)
		{
			return (0);
		}

	rea_d = read(fd, buff, letters);

		if (fd == -1)
		{
			return (0);
		}
	writ_e = write(STDOUT_FILENO, buff, rea_d);

		if (fd == -1)
		{
			return (0);
		}
	close(fd);
	free(buff);
	return (writ_e);
}
