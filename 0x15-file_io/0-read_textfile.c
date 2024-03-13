#include "main.h"

/**
*read_textfile - reads a text file and prints it to the POSIX standard output.
*@filename: file name.
*@letters: size_t (the number of bytes)
*Return: ssize_t
*
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t Readed, written;
	char *text;

	if (filename == NULL)
	return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	return (0);

	text = malloc(letters * sizeof(char));
	if (text == NULL)
	return (0);

	Readed = read(fd, text, letters);
	written = write(STDOUT_FILENO, text, Readed);
	if (Readed != written)
	return (0);

	free(text);
	close(fd);

	return (written);

}
