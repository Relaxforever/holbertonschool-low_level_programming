#include <stdio.h>
/**
*array_iterator - function that executes
*a function given as a parameter on each element of an array.
*@array: the array that will be evaluated
*@size: the size of the array
*@action: the pointer to the functions
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t cont;

	if (array == NULL || size == 0 || action == NULL)
	{
		return;
	}

	{
		for (cont = 0; cont < size; cont++)
		{
			action(array[cont]);
		}
	}
}
