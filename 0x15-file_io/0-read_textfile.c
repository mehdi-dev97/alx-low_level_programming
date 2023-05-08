#include "main.h"

/**
 * read_textfile - read text from give file.
 * @filename: file name
 * @letters: number of letters in file
 * Return: count of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd = open(filename, O_RDONLY),
		rd, wr;
	char *buff;

	if (fd == -1 || filename == NULL)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	rd = read(fd, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);
	if (rd == -1 || wr != rd)
	{
		return (0);
	}
	close(fd);
	free(buff);
	return (wr);
}
