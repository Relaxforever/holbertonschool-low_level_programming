#include "lists.h"
#include <stdio.h>
/**
* print_listint - returns the ints inside the list and the number of nodes
*@h: takes the start of the single list.
*Return: the size of the list.
*/
size_t print_listint(const listint_t *h)
{
	unsigned int count;
	const listint_t *ptr;

	ptr = h;

	for (count = 0; ptr != NULL; count++)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (count);
}
