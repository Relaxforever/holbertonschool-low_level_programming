#include "holberton.h"
#include <stdio.h>
/**
* print_array - prints the array of numbers
* @a : takes the string
* @n : takes the length of the array
*/
void print_array(int *a, int n)
{
	int cont;

	for (cont = 0; cont < n; cont++)
	{
		printf("%d", a[cont]);
		if (cont < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
