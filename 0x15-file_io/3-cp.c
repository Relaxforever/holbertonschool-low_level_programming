#include "holberton.h"
/**
*Err97 - prints the Error 97
*/
void Err97(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}
/**
*Err98 - prints the Error 98
*@file: takes the first argument
*/
void Err98(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}
/**
*Err99 - prints the Error 99
*@file: Takes the second argument
*/
void Err99(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}
/**
*Err100 - prints the 100 error
*@value: takes the number of the integer problem
*/
void Err100(int value)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", value);
	exit(100);
}
/**
*main - checks the code
*@argc: the argument count
*@argv: the argument stored in a pointer array.
*Return: My asscheeks
*/
int main(int argc, char *argv[])
{
	int fd = 0, fd2 = 0, rd = 0, wr = 0, cont, cs, cs2;
	char buffer[1024];

	if (argc != 3)
		Err97();
	if (argv[1] == NULL)
		Err98(argv[1]);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		Err98(argv[1]);
	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd2 == -1)
		Err99(argv[2]);
	rd = read(fd, buffer, 1024);
	if (rd == -1)
		Err98(argv[1]);
	wr = write(fd2, buffer, rd);
	if (wr == -1)
		Err99(argv[2]);
	for (cont = 0; rd == 1024; cont++)
	{
		rd = read(fd, buffer, 1024);
		if (rd == -1)
			Err98(argv[1]);
		wr = write(fd2, buffer, rd);
		if (wr == -1)
			Err99(argv[2]);
	}

	cs = close(fd);
	if (cs == -1)
		Err100(fd);
	cs2 = close(fd2);
	if (cs2 == -1)
		Err100(fd2);
	return (0);
}
