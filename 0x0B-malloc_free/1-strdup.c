#include <stdio.h>
#include <stdlib.h>
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
*_strdup - creates and allocates the memory of an array
*@str: size of the type it will be given char received
*Return: the changed array
*/
char *_strdup(char *str)
{
	unsigned int strlen;
	char *buffer;
	unsigned int count;

	strlen = _strlen(str);

	buffer = malloc((strlen + 1) * sizeof(char));

	if (str == NULL || buffer == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < strlen; count++)
	{
		buffer[count] = str[count];
	}
	return (buffer);
}
