#include "main.h"

/**
 * create_file - create a file
 * @filename: file name
 * @text_content: text content of file
 * Return: 1 (Success), -1 On error
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd, wr;
	int len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	while (text_content[len] != '\0')
	{
		len++;
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if(len > 0)
	{
		wr = write(fd, text_content, len);
	}
	if (fd == -1 || wr == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
