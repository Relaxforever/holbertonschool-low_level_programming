#include <stdlib.h>
/**
* _strlen - counts the len of a String
* @s : takes the position of the string
* Return: return the length of a  string
*/
int _strlen(const char *s)
{
	int cont;

	for (cont = 0; *s != '\0'; s++)
	{
		cont++;
	}
	return (cont);
}
/**
*binary_to_uint - change from a binary to a unsigned int
*@b: the binary given
*Return: the unsigned number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, binlen, base = 1;
	int cont, one = 49, zero = 48;

	if (b == NULL)
	{
		return (0);
	}

	binlen = _strlen(b);

	for (cont = binlen - 1; cont >= 0; cont--)
	{
		if (b[cont] != one && b[cont] != zero)
		{
			return (0);
		}
		if (b[cont] == one)
		{
			num = num + base;
		}
	base = base * 2;
	}
	return (num);
}
