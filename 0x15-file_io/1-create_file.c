#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * swap_int - Function that creates a file.
 *
 * @filename: name of file to be created.
 * @text_content: Output data to file.
 *
 * Return: Integer file descriptor
 */


int create_file(const char *filename, char *text_content)
{
/* Declaration of variables */
	int fd;

/* Code Statements */
	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		ssize_t num_written = write(fd, text_content, strlen(text_content));
		if (num_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

