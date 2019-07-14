#include <stdio.h>
#define notused(a) (void)(a)
/**
*main - prints the name of the program
*@argc: counts the number of arguments
*@argv: stores the arguments in a array
*Return: always zero
*/

int main(int argc, char *argv[])
{
	int one;
	int cont;

	one = 1;
	notused(argv);
		for (cont = 0; cont < argc; cont++)
		{
		}
	cont = cont - one;
	printf("%d\n", cont);
	return (0);
}
