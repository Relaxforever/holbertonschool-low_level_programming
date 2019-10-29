#include "sort.h"

/**
* bubble_sort - sorts the array in ascending order
* @size: the size of the array
* @array: the pointer of the array
*/
void bubble_sort(int *array, size_t size)
{
	size_t cont = 0, index;
	int number;

	if (array == NULL || size <= 1)
		return;

	for (cont = 0; cont < size - 1; cont++)
	{
		for (index = 0; index < size - cont - 1; index++)
		{
			if (array[index] > array[index + 1])
			{
				number = array[index];
				array[index] = array[index + 1];
				array[index + 1] = number;
				print_array(array, size);
			}
		}
	}
}
