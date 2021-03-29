#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 *@filename: name of the file
 *@text_content:
 *
 *Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int i, fd, out;

    if (filename == NULL)
        {
            return (-1);
        }
    fd = open(filename, O_WRONLY | O_APPEND);
    if (fd == -1)
    {
        return (-1);
    }
    if(text_content == NULL)
    {
        return (1);
    }
    for (i = 0;text_content[i]; i++)
    ;
    out = write(fd, text_content, i);
    close(fd);
    if (out == -1)
    {
        return (-1);
    }
    return (1);
}
