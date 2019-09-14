#include "lists.h"
/**
* get_dnodeint_at_index - prints all the elements of the list.
*@head: the list.
*@index: the number.
*Return: the number of nodes of 0 if none.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int cont = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	for (cont = 0; cont < index; cont++)
	{
		if (head)
		{
			head = head->next;
		}
		else
		{
			return (NULL);
		}
	}
	return (head);
}
