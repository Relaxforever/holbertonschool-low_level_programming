#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
* _strlen - counts the len of a String
* @s : takes the position of the string
* Return: return the length of a  string
*/
int _strlen(char *s)
{
	int cont;

	for (cont = 0; *s != '\0'; s++)
	{
		cont++;
	}
	return (cont);
}
/**
*add_node - adds a node at the beginning
*@head: the start of the list
*@str: the string given
*Return: the node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	tmp = *head;
	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->str = strdup(str);
	tmp->len = _strlen(tmp->str);
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
