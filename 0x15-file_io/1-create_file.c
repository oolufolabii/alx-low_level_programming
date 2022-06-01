#include "main.h"

/**
 * create_file - create a file and input text
 * @filename: name of the file
 * @text_content: text to input to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, k, a = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[a])
			a++;
		k = write(file, text_content, a);
		if (k != a)
			return (-1);
	}

	close(file);

	return (1);
}
