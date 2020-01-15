#include <stdio.h>
/**
 *linear_search - function that does a linear search
 * @array: the pointer to the array given
 * @size: the size of the array
 * @value: the value that will be search
 * Return: the index of the computer
 */
int linear_search(int *array, size_t size, int value)
{
	size_t cont = 0;

	if (array == NULL)
	{
		return (-1);
	}
	for (cont = 0; cont < size; cont++)
	{
		printf("Value checked array[%lu] = [%d]\n", cont, array[cont]);
		if (array[cont] == value)
		{
			return (cont);
		}
	}
	return (-1);
}


