#include "main.h"
/**
 * read_textfile - reads a text file and prints it into the POSIX standard output.
 * @filename: name of file to read from.
 * @letters: the number of letters to read.
 *
 * Return: actual number of letters it could read and print
 *        0 if the file can not be opened or read,
 *          if filename is NULL, or 
 *          if write fails or does not write the expected
 *          amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buff[1000];
	ssize_t nread, nwrite;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	nread = read(fd, buff, letters);
	nwrite = write(STDOUT_FILENO, buff, nread);

	close(fd);

	return (nwrite);
}
