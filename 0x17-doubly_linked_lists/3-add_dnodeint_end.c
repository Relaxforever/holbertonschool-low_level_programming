#include "lists.h"
/**
*add_dnodeint_end - adds a node at the end of the list
*@head: the head of the node
*@n: the number that will be added.
*Return: the list with the new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr;
	dlistint_t *tmp;
	int cont;

	if (head == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = ptr;
		ptr->n = n;
		ptr->next = NULL;
		ptr->prev = NULL;
		return (ptr);
	}
	tmp = *head;
	for (cont = 0; tmp->next != NULL; cont++)
	{
		tmp = tmp->next;
	}
	tmp->next = ptr;
	ptr->prev = tmp;
	ptr->n = n;
	return (ptr);
}
