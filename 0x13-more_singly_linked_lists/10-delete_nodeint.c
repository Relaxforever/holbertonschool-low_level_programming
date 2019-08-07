#include "lists.h"
#include <stdlib.h>
/**
*delete_nodeint_at_index - deletes node at index
*@head: takes the list
*@index: choose the index that it's going to get deleted
*Return: God
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *ptr;
	unsigned int cont;

	if (*head == NULL)
	{
		return (-1);
	}
	tmp = *head;
	for (cont = 0; tmp != NULL; cont++)
	{
		if ((cont + 1) == index)
		{
			ptr = tmp->next;
			tmp->next = (tmp->next)->next;
			free(ptr);
			return (1);
		}
		if (index == 0)
		{
			ptr = tmp;
			*head = tmp->next;
			free(ptr);
			return (1);
		}
	tmp = tmp->next;
	}
	return (-1);
}
