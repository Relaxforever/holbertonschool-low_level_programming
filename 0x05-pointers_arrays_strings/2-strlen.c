#include "holberton.h"
/**
* _strlen - counts the len of a String
* @s : takes the position of the string
* 
**/
int _strlen(char *s)
{
	char arr[] = *s;
	int cont;

	for (cont = 0; cont <= arr; cont++)
	{
		cont++;
	}
	if (cont > 9)
	{
		putchar((cont / 10) + '0' );
	}
	_putchar((cont % 10) + '0');
		
}
