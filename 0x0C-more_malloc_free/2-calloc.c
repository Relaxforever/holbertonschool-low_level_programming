#include <stdio.h>
#include <stdlib.h>
/**
*_calloc - calloc function
*@nmemb: element
*@size: size of the element
*Return: my family please
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int con;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (con = 0; ptr[con] != '\0'; con++)
	{
		ptr[con] = 0;
	}
	return (ptr);
}
