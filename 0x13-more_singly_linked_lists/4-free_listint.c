#include "lists.h"
#include <stdlib.h>
/**
*free_listint - frees a list
*@head: takes the node
*Return: the frees list
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;
	listint_t *ptr;

	tmp = head;
	while (tmp)
	{
		ptr = tmp->next;
		free(tmp);
		tmp = ptr;
	}
	head = NULL;
}
