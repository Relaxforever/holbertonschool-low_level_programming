#include "holberton.h"
/**
* _memset - Changes the content of s  n times with the b constant
*@s: variable that will be changed
*@b: constant that will replace the content of s n number of bytes
*@n: number of bytes that will be changed
*Return: the changed value of s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int cont;

	for (cont = 0; cont < n; cont++)
	{
		s[cont] = b;
	}
	return (s);
}
