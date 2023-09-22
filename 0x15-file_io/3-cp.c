#include "main.h"

/**
 * main - main
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp file_from file_to\n");
		exit(97);
	}

	result = copyFile(argv[1], argv[2]);

	if (result == 0)
		return (0);
	else
		return (result);
}

/**
 * copyFile - Copies a file from the source path to the destination path.
 * @srcPath: The path of the source file.
 * @destPath: The path where the source file will be copied to.
 * Description - print all arguments received.
 * Return: 0 on success
 */
int copyFile(const char *srcPath, const char *destPath)
{
	int file_fr;
	int file_to;
	ssize_t r;
	char buf[BUFSIZ];

	file_fr = open(srcPath, O_RDONLY);
	if (file_fr < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", srcPath);
		exit(98);
	}

	file_to = open(destPath, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", destPath);
		close(file_fr);
		exit(99);
	}
	while ((r = read(file_fr, buf, BUFSIZ)) > 0)
	{
		if (write(file_to, buf, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", destPath);
			close(file_fr);
			close(file_to);
			return (99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: cam't read from file %s\n", srcPath);
		close(file_fr);
		close(file_to);
		exit(98);
	}
	if (close(file_fr) < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_fr);
		exit(100);
	}
	if (close(file_to) < 0)
        {
                dprintf(STDERR_FILENO, "Error: can't close fd %d\n", file_to);
                exit(100);
        }
	close(file_fr);
	close(file_to);
	return (0);
}
