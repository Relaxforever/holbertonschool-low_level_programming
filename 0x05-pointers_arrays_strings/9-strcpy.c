#include "holberton.h"
/**
* _strcpy - takes a string and reverses it.
* @dest : takes the position of the array
* @src : takes the complete array
* Return: return the array
*/
char *_strcpy(char *dest, char *src)
{
	int cont;
	int cont2;

	for (cont = 0; src[cont] != '\0'; cont++)
	{
	}
	for (cont2 = 0; cont2 <= cont; cont2++)
	{
		dest[cont2] = src[cont2];
	}
	dest[cont2 + 1] = '\0';
	return (dest);
}
