#include "lists.h"
/**
* dlistint_len - prints all the elements of the list.
*@h: the list.
*Return: the number of nodes of 0 if none.
*/
size_t dlistint_len(const dlistint_t *h)
{
	int cont = 0;

	if (h == NULL)
	{
		return (cont);
	}
	for (cont = 0; h != NULL; cont++)
	{
		h = h->next;
	}
	return (cont);
}
