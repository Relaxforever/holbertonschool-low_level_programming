#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
*add_node_end - add nodes at the end
*@head: aleluya
*@str: the string that will be changed
*Return: The node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int con;
	list_t *ptr;
	list_t *tmp;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
	{
		return (NULL);
	}

	tmp->str = strdup(str);
		if (tmp->str == NULL)
		{
			free(tmp);
		}
	tmp->len = strlen(tmp->str);
	tmp->next = NULL;

	if (*head == NULL)
	{
		*head = tmp;
		return (*head);
	}
	ptr = *head;

	for (con = 0; ptr->next != NULL; con++)
	{
		ptr = ptr->next;
	}
	ptr->next = tmp;
	return (*head);
}
