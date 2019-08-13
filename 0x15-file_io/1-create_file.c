#include "holberton.h"
/**
* _strlen - counts the len of a String
* @s : takes the position of the string
* Return: return the length of a  string
*/
int _strlen(char *s)
{
	int cont;

	for (cont = 0; *s != '\0'; s++)
	{
		cont++;
	}
	return (cont);
}
/**
*create_file - creates a file in the system
*@filename: the filename
*@text_content: the content that will be in the file
*Return: 1 on succes or -1 if it fails.
*/
int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	int lenT = 0;
	int lenB = 0;

	lenT = _strlen(text_content);
	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		lenB = write(fd, text_content, lenT);
		if (lenB == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
