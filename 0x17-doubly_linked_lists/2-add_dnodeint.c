#include "lists.h"
/**
*add_dnodeint - adds a node at the beginning of the list
*@head: the head of the node
*@n: the number that will be added.
*Return: the list with the new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

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
	ptr->next = *head;
	ptr->prev = NULL;
	ptr->n = n;
	*head = ptr;
	return (ptr);
}
