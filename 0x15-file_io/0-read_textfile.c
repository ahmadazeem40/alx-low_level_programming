#include "main.h"

/**
 * read_textfile - read textfile and print it
 * @filename: name of file
 * @letters: num of letters to print
 * Return: num of bytes printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char buffer[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, &buffer[0], letters);
	bytes = write(STDOUT_FILENO,&buffer[0], bytes);
	close(fd);
	return (bytes);
}
