#include "holberton.h"
/**
* puts2 - prints a string with putchar
* @str : takes the position of the string
* Return: return the length of a  string
*/
void puts2(char *str)
{
	int cont;

	for (cont = 0; *str != '\0'; cont = cont + 2)
	{
		_putchar(*str);
		str= str + 2;
	}
	_putchar('\n');
}
