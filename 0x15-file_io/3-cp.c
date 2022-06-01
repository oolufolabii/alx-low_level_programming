#include "main.h"

/**
 * main - copy the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int file_read, file_write, i, j, k;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_read = open(argv[1], O_RDONLY);
	if (file_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_write = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((i = read(file_read, buf, BUFSIZ)) > 0)
	{
		if (file_write < 0 || write(file_write, buf, i) != i)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_read);
			exit(99);
		}
	}
	if (i < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	j = close(file_read);
	k = close(file_write);
	if (j < 0 || k < 0)
	{
		if (j < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_read);
		if (k < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_write);
		exit(100);
	}
	return (0);
}
