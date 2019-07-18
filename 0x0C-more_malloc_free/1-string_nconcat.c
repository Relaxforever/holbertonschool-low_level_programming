#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
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
* string_nconcat - prints the allocated memory
* @s1: gets the type of data and how much memory it will store.
* @s2: second string
* @n: number of bytes
* Return: two strings together
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *poi;
	unsigned int s1len;
	unsigned int s2len;
	unsigned int cont, copy;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1len = _strlen(s1);
	s2len = _strlen(s2);
	if (n >= s2len)
	{
		n = s2len;
	}
	poi = malloc((s1len + n) * sizeof(char) + 1);
	if (poi == NULL)
	{
		return (NULL);
	}

	for (cont = 0; cont < s1len; cont++)
	{
		poi[cont] = s1[cont];
	}
	for (copy = 0; copy < n; copy++)
	{
		poi[cont + copy] = s2[copy];
	}

	poi[cont + copy] = '\0';
	return (poi);
}
