#include "main.h"

/**
 * create_file - creates a file
 * @filename:  name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 if filename is null or if text_content
 * 	is null create empty file.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, tlen;
	ssize_t nwrite;

	if (filename == NULL) return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd == -1) return (-1);

	if (!text_content)
	{
		text_content = "";
	}
	for (tlen = 0; text_content[tlen]; tlen++)
		;

	nwrite = write(fd,text_content, tlen);
	if (nwrite == -1) return (-1);

	close(fd);
	return (1);
}
