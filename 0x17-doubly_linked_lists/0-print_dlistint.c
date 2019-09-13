#include "lists.h"
/**
* print_dlistint - prints all the elements of the list.
*@h: the list.
*Return: the number of nodes of 0 if none.
*/
size_t print_dlistint(const dlistint_t *h)
{
	int cont = 0;

	if (h == NULL)
	{
		return (cont);
	}
	for (cont = 0; h != NULL; cont++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (cont);
}
