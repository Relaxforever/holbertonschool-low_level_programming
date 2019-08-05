#include "lists.h"
#include <stdio.h>
/**
* listint_len - returns the ints inside the list and the number of nodes
*@h: takes the start of the single list.
*Return: the len of the list.
*/
size_t listint_len(const listint_t *h)
{
	unsigned int count;
	const listint_t *ptr;

	ptr = h;

	for (count = 0; ptr != NULL; count++)
	{
		ptr = ptr->next;
	}
	return (count);
}
