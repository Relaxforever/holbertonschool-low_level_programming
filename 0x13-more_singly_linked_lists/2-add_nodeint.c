#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint - adds a node
*@head: receives the first node
* @n: takes the integer variable
* Return: return the newly created node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
	{
		return (NULL);
	}

	ptr = *head;
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);

}
