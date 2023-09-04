#include "main.h"

/**
 * read_textfile -reads a text file and prints it to the POSIX standard output.
 * @letters: the number of letters it should read and print
 * @filename: file to read.
 * Return: returns the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes, fwrite;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	bytes = read(fd, buffer, letters);
		if (bytes == -1)
			return (0);
	buffer[bytes] = '\0';
	close(fd);

	fwrite = write(STDOUT_FILENO, buffer, bytes);
	if (fwrite == -1)
		return (0);
	free(buffer);
	return (fwrite);
}

