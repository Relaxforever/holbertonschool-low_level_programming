#include "lists.h"
#include <stdlib.h>
/**
*list_len - prints all the elements of the list.
*@h: the node it will take
*Return: the size of the list
*/
size_t list_len(const list_t *h)
{
	size_t con;
	const list_t *ptr;

	ptr = h;

	if (ptr == NULL)
	{
		return (0);
	}

	for (con = 0; ptr != NULL; con++)
	{
		ptr = ptr->next;
	}
	return (con);
}
