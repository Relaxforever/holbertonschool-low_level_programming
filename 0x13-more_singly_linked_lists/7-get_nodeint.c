#include "lists.h"
#include <stdlib.h>
/**
*get_nodeint_at_index - gets the number of the index given.
*@head: the list
*@index: the number of the node I will get
*Return: the node in the index given.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int cont;

	ptr = head;

	for (cont = 0; cont < index; cont++)
	{
		ptr = ptr->next;
	}
	return (ptr);
}
