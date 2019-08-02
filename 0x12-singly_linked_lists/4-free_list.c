#include "lists.h"
#include <stdlib.h>
/**
*free_list - frees the lists
*@head: the list that will be freed.
*/
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (head != NULL)
	{
		tmp = head
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
	free(head);
}
