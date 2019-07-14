#include <stdio.h>
#define notused(a) (void)(a)
/**
*main - prints the arguments it receives
*@argc: counts the number of arguments
*@argv: stores the arguments in a array
*Return: always zero
*/

int main(int argc, char *argv[])
{
	int cont;

		for (cont = 0; cont < argc; cont++)
		{
			printf("%s\n", argv[cont]);
		}
	return (0);
}
