#include "main.h"

/**
*append_text_to_file -  appends text at the end of a file.
*@filename: file name.
*@text_content: the string to be append
*Return: int
*
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written, i = 0;

	if (filename  == NULL)
	return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		i++;
	}

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
	return (-1);

	written = write(fd, text_content, i);
	if (written == -1)
	return (-1);

	return (1);
}
