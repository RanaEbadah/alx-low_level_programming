#include "main.h"

/**
*create_file - creates a file.
*@filename: file name.
*@text_content: the text to be written
*Return: ssize_t
*
*/
int create_file(const char *filename, char *text_content)
{
	int fd, written, i = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		i++;
	}

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	written = write(fd, text_content, i);

	if ((fd == -1) || (written == -1))
	return (-1);

	return (1);

}
