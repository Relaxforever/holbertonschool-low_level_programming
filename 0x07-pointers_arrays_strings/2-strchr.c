#include "holberton.h"
/**
*_strchr - detects when a character gets
*@s: takes the array and evaluates it
*@c: the character that is going to get evaluate
*Return: null if not the same or c
*/
char *_strchr(char *s, char c)
{
	int cont = 0;

	while (s[cont] != '\0')
	{
		if (s[cont] == c)
		{
			return (s + i);
		}
	cont++;
	}
	if (s[cont] == c)
	{
		return (s + i);
	}
	return ('\0');
}
