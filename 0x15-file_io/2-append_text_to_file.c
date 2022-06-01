#include "main.h"

/**
 * append_text_to_file - appends text at the end to a file
 * @filename: file to append
 * @text_content: content to append into a file
 * Return: on success 1, and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, k, a = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
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
