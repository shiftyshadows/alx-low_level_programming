#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Function that reads a text file and prints
 * it to the POSIX standard output.
 *
 * @filename: const character pointer.
 * @letters: unsigned integer.
 *
 * Return: Bytes written.
 */



ssize_t read_textfile(const char *filename, size_t letters)
{
/* Declaration of variables */
	int fd;
	char *buf;
	ssize_t bytes_read, bytes_written;


/* Code Statements */

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buf = (char *) malloc((letters + 1) * sizeof(char));
	if (buf == NULL)
	{
		return (0);
	}

	bytes_read = read(fd, buf, letters);
	if (bytes_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	buf[bytes_read] = '\0'; /* add null terminator to the end of the buffer */

	bytes_written = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);

	return (bytes_written);
}

