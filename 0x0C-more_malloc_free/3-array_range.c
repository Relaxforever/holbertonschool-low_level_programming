#include <stdlib.h>
/**
*array_range - prints an array of integers
*@min: min number
*@max: max number
*Return: me from the olvidooo, return me from the soledad
*/
int *array_range(int min, int max)
{
	int *ptr;
	int con;
	int sub;

	if (min > max)
	{
		return (NULL);
	}
	sub = (max - min) + 1;
	ptr = malloc(sub * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (con = 0; min <= max; con++)
	{
		ptr[con] = min;
		min++;
	}
	return (ptr);
}
