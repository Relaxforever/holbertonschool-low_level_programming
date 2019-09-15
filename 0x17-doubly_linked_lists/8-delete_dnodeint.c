#include "lists.h"
/**
*delete_dnodeint_at_index - delete node in that index
*@head: the list
*@index: the index that will be erased
*Return: the list without the index
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int cont = 0;
	dlistint_t *kill;

	if (*head == NULL)
		return (-1);
	kill = *head;
	for (cont = 0; cont < index; cont++)
	{
		if (kill->next)
		{
			kill = kill->next;
		}
		else
		{
			return (-1);
		}
	}
	if (kill == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = kill->next;
		if (kill->next)
		{
			kill->next->prev = NULL;
		}
		free(kill);
		return (1);
	}
	kill->prev->next = kill->next;
	if (kill->next)
	{
		kill->next->prev = kill->prev;
	}
	free(kill);
	return (1);
}
