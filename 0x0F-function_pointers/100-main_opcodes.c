#include <stdio.h>
#include <stdlib.h>
/**
*main - takes the object code
*@argc: counts the number of arguments
*@argv: takes the vector arguments
*Return: always zero my dud
*/
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
