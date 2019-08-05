#include "lists.h"
#include <stdlib.h>
/**
*free_list - frees the lists
*@head: the list that will be freed.
*/
void free_list(list_t *head)
{
	list_t *tmp;
	list_t *ptr;

	tmp = head;
	while (tmp)
	{
		ptr = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = ptr;
	}
	head = NULL;
}
