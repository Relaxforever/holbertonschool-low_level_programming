#include <stdio.h>
/**
* array_given - prints the array given
* @array: the array given
* @end: the last one
* @begin: the first one
* Return: 1 if succesful, 0 if god forsake us
*/
int array_given(int *array, size_t end, size_t begin)
{
	size_t cont;

	printf("Searching in array: ");
	for (cont = begin; cont <= end; cont++)
	{
		if (cont == end)
			printf("%d", array[cont]);
		else
			printf("%d, ", array[cont]);
	}
	printf("\n");
	return (1);
}
/**
 * binary_search - applies the algorithm search algorithm
 * @array: the array given
 * @size: the size of the array
 * @value: the value that will be search
 * Return: the index of the array
 */
int binary_search(int *array, size_t size, int value)
{
	size_t middle = 0, begin = 0, end = 0;

	if (array == NULL)
		return (-1);
	end = size - 1;
	for ( ; begin != (end + 1); )
	{
		middle = (begin + end) / 2;
		array_given(array, end, begin);
		if (array[middle] == value)
			return (middle);
		if (array[middle] < value)
			begin = middle + 1;
		if (array[middle] > value)
			end = middle - 1;
	}
	return (-1);
}
