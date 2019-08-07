#include "lists.h"
#include <stdlib.h>
/**
*insert_nodeint_at_index - insert node at given position
*@head: takes the node
*@idx: index given
*@n: number given to add
*Return: the list with the index given
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *tmp;
	unsigned int cont;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}
	else
	{
		tmp = *head;
		for (cont = 0; cont != idx - 1; cont++)
		{
			if (tmp->next != NULL)
			{
				tmp = tmp->next;
			}
			else
			{
				return (NULL);
			}
		}
	}
	ptr->next = tmp->next;
	tmp->next = ptr;
	return (ptr);
}
