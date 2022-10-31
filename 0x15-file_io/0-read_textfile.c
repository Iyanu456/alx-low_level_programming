#include "main.h"

/**
 * read_textfile - reads a text file and writes it to sdtout
 * @filename: filename
 * @letters: letters
 * Description: reads a text file and writes it to stdout
 * Return: textfile
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opened, wrote, reading;

	char *buffer;

	if (filename == NULL)
		return (0);

	opened = open(filename, O_RDONLY);

	if (opened == -1)
		return (0);

	buffer = malloc(letters);

	if (buffer == NULL)
		return (0);

	reading = read(opened, buffer, letters);

	if (reading == -1)
		return (0);

	wrote = write (STDOUT_FILENO, buffer, reading);

	if (wrote == -1 || wrote != reading)
		return (0);

	close(opened);
	free(buffer);
	return (wrote);
}
