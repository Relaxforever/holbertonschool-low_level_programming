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
*delete_dnodeint_at_index - delete node in that index
*@head: the list
*@index: the index that will be erased
*Return: the list without the index
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int cont = 0;
	size_t lenofnode = 0;
	dlistint_t *kill;

	if (head == NULL)
		return (-1);
	if (*head == NULL)
		return (-1);
	if ((*head)->next == NULL)
	{
		*head = NULL;
		return (1);
	}
	kill = *head;
	lenofnode = dlistint_len(kill);
	if (index <= lenofnode)
	{
		if (index == 0)
		{
			*head = kill->next;
			if (kill->next)
				kill->next->prev = NULL;
			free(kill);
			return (1);
		}
		for (cont = 0; cont < (index - 1); cont++)
			kill = kill->next;
		if (lenofnode == index)
		{
			kill->prev->next = kill->next;
			free(kill);
			return (1);
		}
		kill->prev->next = kill->next;
		kill->next->prev = kill->prev;
		free(kill);
		return (1);
	}
	return (-1);
}
