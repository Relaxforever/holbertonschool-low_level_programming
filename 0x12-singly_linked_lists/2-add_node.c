#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
*add_node_end - add a node at the end.
*@head: the head of the filesl
*@str: the string given 
*
**/
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int con;
	list_t *ptr;
	list_t *tmp;

	tmp = *head;
	ptr = *head;

	for (con = 0; ptr != NULL; con++)
	{
		ptr = ptr->next;
	}
	ptr = malloc(sizeof(list_t));
		if (ptr == NULL)
		{
			return (NULL);
		}
	ptr->str = strdup(str);
	ptr->len = _strlen(str);
	ptr->next = malloc (sizeof(list_t));
	/**(ptr->next)->next = NULL;
	(ptr->next)->str = NULL;*/
	return (ptr);
	
}
