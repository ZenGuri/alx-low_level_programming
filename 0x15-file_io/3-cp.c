#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

/*
 *
 * This program takes two command-line arguments: file_from and file_to.
 * It reads the contents of file_from and copies them to file_to. If either
 * file cannot be opened or there are any errors during the copy process,
 * error messages are printed to the standard error stream.
 *
 * Usage: ./file_copy file_from file_to
 *
 * Return Codes:
 *   - 0: Success
 *   - 97: Incorrect number of arguments
 *   - 98: Unable to read from file_from
 *   - 99: Unable to write to file_to
 *   - 100: Unable to close file descriptors
 */
int main(int argc, char *argv[])
{
	char *file_from, *file_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		return (98);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		close(fd_from);
		return (99);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			close(fd_from);
			close(fd_to);
			return (99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		close(fd_from);
		close(fd_to);
		return (98);
	}

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", (fd_from == -1) ? fd_to : fd_from);
		return (100);
	}

	return (0);
}

