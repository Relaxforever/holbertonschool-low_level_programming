#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
*create_array - creates and allocates the memory of an array
*@size: size of the type it will be given
*@c: char received
*Return: the changed array
*/
char *create_array(unsigned int size, char c)
{
	char *tmp;
	unsigned int count;

	tmp = malloc(size * sizeof(char));

	if (tmp == 0 || tmp == NULL)
	{
		return (NULL);
	}
	else
	{
		for (count = 0; count < size; count++)
		{
			tmp[count] = c;
		}
		tmp = '\0';
		return (tmp);
	}
}
