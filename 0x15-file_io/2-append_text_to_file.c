#include "main.h"

/**
 * append_text_to_file - appends a text to a file
 * @filename: filename
 * @text_content: text content
 * Description: appends a text to a file
 * Return: 1 on success else -1
 */

int append_text_to_files(const char *filename, char *text_content)
{
	int opened, i, wrote, closing;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		i = 0;
	else
	{
		i = 0;
		while (text_content[i] != '\0')
			i++;
	}

	opened = open(filename, O_WRONLY | O_APPEND);
	wrote = write(opened, text_content, i);

	if (wrote == -1 || opened == -1)
		return (-1);

	closing = close(opened);
	if (closing == -1)
		return (-1);
	return (1);
}
