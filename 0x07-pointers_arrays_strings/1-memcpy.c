#include "holberton.h"

/**
*_memcpy - Changes the content of s  n times with the b constant
*@dest: variable that will be changed
*@src: constant that will replace the content of s n number of bytes
*@n: number of bytes that will be changed
*Return: the changed value of dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cont;
	char tmp;

	for (cont = 0; cont < n; cont++)
	{
		tmp = src[cont];
		dest[cont] = tmp;
	}
	return (dest);
}
