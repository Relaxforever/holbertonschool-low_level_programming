#include "lists.h"
#include <stdlib.h>
/**
*free_listint2 - frees a list
*@head: takes the node
*Return: the frees list
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *ptr;

	if (head == NULL)
	{
		return;
	}

	tmp = *head;
	while (tmp)
	{
		ptr = tmp->next;
		free(tmp);
		tmp = ptr;
	}
	*head = NULL;
}
