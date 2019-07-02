#include "holberton.h"
/**
* print_rev - prints a reverse string with putchar
* @s : takes the position of the string
* Return: return the length of a  string
*/
void print_rev(char *s)
{
	int cont;
	int rever;

	for (cont = 0; *s != '\0'; cont++)
	{
		s++;
	}
	for (rever = cont; rever != 0; rever--)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
