#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
* malloc_checked - prints the allocated memory
* @b: gets the type of data and how much memory it will store.
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
