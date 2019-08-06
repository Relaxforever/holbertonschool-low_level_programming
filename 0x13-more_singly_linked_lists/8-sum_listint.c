#include "lists.h"
#include <stdlib.h>
/**
*sum_listint - sum all the values of the node.
*@head: the first node.
*Return: the sum of what's inside the nodes
*/
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	listint_t *tmp;
	int sum = 0;
	int cont;

	if (head == NULL)
	{
		return (0);
	}

	ptr = head;
	tmp = head->next;
	for (cont = 0; ptr != NULL && tmp != NULL; cont++)
	{
		sum += ptr->n;
		ptr = tmp;
		tmp = ptr->next;
	cont++;
	}
	sum += ptr->n;
	return (sum);
}
