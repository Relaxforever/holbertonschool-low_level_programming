#include "holberton.h"
/**
*read_textfile - read a file
*@filename: the file name
*@letters: the number of byte..
*Return: the character number
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fd, len, len2;

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		free(buff);
		return (0);
	}
	if (filename == NULL)
	{
		free(buff);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}
	len = read(fd, buff, letters);
	if (len == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}
	len2 = write(STDOUT_FILENO, buff, len);
	if (len2 == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}
	close(fd);
	free(buff);
	return (len2);
}
