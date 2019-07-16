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
*str_concat - creates and allocates the memory of an array
*@s1: size of the type it will be given char received
*@s2: the changed array
*Return: the strings together
*/
char *str_concat(char *s1, char *s2)
{
	int s1len;
	int compl;
	char *buff;
	int cont, cont2;
	int s2len;

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
	compl = s1len + s2len;

	buff = malloc((compl + 1) * sizeof(char));
	if (buff == NULL)
	{
		return (NULL);
	}
	for (cont = 0; cont < s1len; cont++)
	{
		buff[cont] = s1[cont];
	}
	for (cont2 = 0; cont2 < s2len; cont2++)
	{
		buff[cont + cont2] = s2[cont2];
	}
	buff[cont + cont2 + 1] = '\0';
	return (buff);
}
