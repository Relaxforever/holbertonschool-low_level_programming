#include "holberton.h"
/**
* _puts - prints a string with putchar
* @str : takes the position of the string
* Return: return the length of a  string
*/
void _puts(char *str)
{
	int cont;

	for (cont = 0; *str != '\0'; cont++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
