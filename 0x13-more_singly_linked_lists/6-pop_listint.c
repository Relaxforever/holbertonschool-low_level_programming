#include "lists.h"

#include <stdlib.h>
/**
*pop_listint - eliminate the first node
*@head: the node head
*Return: the new list without the head
*/
int pop_listint(listint_t **head)
{
	int num = 0;
	listint_t *tmp;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		tmp = *head;
		num = tmp->n;
		*head = tmp->next;
		free(tmp);
	}
	return (num);
}
