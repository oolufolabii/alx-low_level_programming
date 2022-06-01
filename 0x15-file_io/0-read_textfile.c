#include "main.h"

/**
 * read_textfile - reads a text file and prints it to std output
 * @filename: name of the file we want to read
 * @letters: number of char/letters to read and print
 * Return: the number of letters printed, or 0 if it failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int a, k;
	char *buf;

	if (!filename)
		return (0);

	file = open(filename, O_RDONLY);
	if (file < 0)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	a = read(file, buf, letters);
	if (a < 0)
	{
		free(buf);
		return (0);
	}
	buf[a] = '\0';

	close(file);

	k = write(STDOUT_FILENO, buf, a);
	if (k < 0)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (k);
}
