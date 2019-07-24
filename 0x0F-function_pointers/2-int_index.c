#include <stdio.h>
#include "function_pointers.h"
/**
*int_index - search an integer and prints the location of the array
*@size: the size of the array
*@cmp: pointer to the functions.
*@array: the array we will evaluate it.
*Return: return in what part of the array[index] is the number located.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int cont;
	int compare;

	if (array == NULL || cmp == NULL)
	{
		return (NULL);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (cont = 0; cont < size; cont++)
	{
	compare = cmp(array[cont]);
		if (compare != 0)
		{
			return (cont);
		}
	}
	return (-1);
}
