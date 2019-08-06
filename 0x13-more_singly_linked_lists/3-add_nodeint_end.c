#include "lists.h"
#include <stdlib.h>
/**
*add_nodeint_end - adds a node at the end of everything
*@head: the first node
*@n: takes the number given
*Return: The nodes and the extra one at the end
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	unsigned int cont;
	listint_t *ptr;
	listint_t *tmp;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
	{
		return (NULL);
	}

	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL)
	{
		*head = tmp;
		return (*head);
	}
	ptr = *head;

	for (cont = 0; ptr->next != NULL; cont++)
	{
		ptr = ptr->next;
	}
	ptr->next = tmp;
	return (*head);
}
