#include "holberton.h"
/**
* _strlen - counts the len of a String
* @s : takes the position of the string
* Return: return the length of a  string
*/
size_t _strlen(char *s)
{
	size_t cont;

	for (cont = 0; *s != '\0'; s++)
	{
		cont++;
	}
	return (cont);
}
/**
*append_text_to_file - creates a file in the system
*@filename: the filename
*@text_content: the content that will be in the file
*Return: 1 on succes or -1 if it fails.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;
	ssize_t lenB = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		lenB = write(fd, text_content, _strlen(text_content));
		if (lenB == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
