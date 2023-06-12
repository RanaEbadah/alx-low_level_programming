#include "main.h"


/**
 * closeFiles - close file
 * @fd: file participate number
 * Return: void
 */
void closeFiles(int fd)
{
	int done;

	done = close(fd);

	if (done == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * createBuffer - create a buffer (text written in from file)
 * @file: file name
 * Return: the buffer
 */
char *createBuffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * BUF_SIZE);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 * Return: 0 if success.
 */
int main(int argc, char *argv[])
{
	int fromFd, toFd;
	ssize_t readed, written;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fromFd = open(argv[1], O_RDONLY);
	buffer = createBuffer(argv[2]);
	readed = read(fromFd, buffer, BUF_SIZE);
	toFd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if ((readed == -1) || (fromFd == -1))
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		written = write(toFd, buffer, readed);
		if ((toFd == -1) || (written == -1))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		readed = read(fromFd, buffer, BUF_SIZE);
		toFd = open(argv[2], O_WRONLY | O_APPEND);
	} while (readed > 0);
	free(buffer);
	closeFiles(fromFd);
	closeFiles(toFd);
	return (0);

}
