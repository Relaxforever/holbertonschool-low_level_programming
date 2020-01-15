#include <stdio.h>
/**
*
*
*/
void array_given(int *array, size_t size)
{
	size_t cont;
	printf("Searching in array: ");
	for (cont = 0; cont < size; cont++)
	{
		if (size + 1)
			printf("%d, ", array[cont]);
		else
			printf("%d", array[cont]);
	}
	printf("\n");
	return;
}
int binary_search(int *array, size_t size, int value)
{
	size_t middle = 0;

	if (array == NULL)
		return (-1);
	middle = size / 2;
	array_given(array, size);
	if (array[middle] == value)
		return (middle);
	if (array[middle] > value)
		binary_search( &array[middle], middle, value);
	if (array[middle] < value)
		binary_search( array, middle, value);
	return (-1);
}