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
/**
* insert_dnodeint_at_index - insert a node in x position.
*@h: the list.
*@idx: the node it will be added
*@n: the number that will be added.
*Return: the number of nodes of 0 if none.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int cont = 0;
	size_t lenofnode = 0;
	dlistint_t *ptr;
	 dlistint_t *tmp;

	if (h == NULL)
		return (NULL);
	tmp = *h;
	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	lenofnode = dlistint_len(tmp);
	if (idx <= lenofnode)
	{
		if (idx == 0)
		{
			add_dnodeint(h, n);
			return (*h);
		}
		for (cont = 0; cont < (idx - 1); cont++)
		{
			tmp = tmp->next;
		}
		ptr->prev = tmp;
		ptr->next = tmp->next;
		ptr->n = n;
		tmp->next = ptr;
		return (ptr);
	}
	else
	{
		return (NULL);
	}
	return (NULL);
}
