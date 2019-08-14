#include "holberton.h"
/**
*main - checks the code
*@argc: the argument count
*@argv: the argument stored in a pointer array.
*Return: My asscheeks
*/
int main(int argc,char *argv[])
{
	int fd = 0, fd2 = 0, rd = 0;
	char buffer [1024];

	if (argc != 3)
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	if (argv[1] == NULL)
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			exit(98);			

	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
		if (fd2 == -1)
			exit(99);
	rd = read(fd, buffer, 1024);
	write(fd2, buffer, rd);
		if (rd == -1)
			exit(99);
	close(fd);
	close(fd2);
}
