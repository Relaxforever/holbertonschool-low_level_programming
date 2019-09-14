#include "lists.h"
/**
* sum_dlistint - prints all the elements of the list.
*@head: the list.
*Return: the sum of nodes of 0 if none.
*/
int sum_dlistint(dlistint_t *head)
{
	unsigned int cont = 0;
	int sum = 0;

	if (head == NULL)
	{
		return (sum);
	}
	for (cont = 0; head != NULL ; cont++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
