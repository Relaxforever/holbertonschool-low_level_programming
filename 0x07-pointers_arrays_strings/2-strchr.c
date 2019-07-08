#include "holberton.h"
/**
*_strchr - detects when a character gets
*@s: takes the array and evaluates it
*@c: the character that is going to get evaluate
*Return: null if not the same or c
*/
char *_strchr(char *s, char c)
{
	int cont;

	for (cont = 0; s[cont] != '\0'; cont++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return ('\0');
}
