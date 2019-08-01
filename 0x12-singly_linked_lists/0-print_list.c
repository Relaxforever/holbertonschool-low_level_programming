#include "lists.h"
#include <stdio.h>
/**
*print_list - prints all the elements of the list.
*@h: the node it will take
*Return: the size of the list
*/
size_t print_list(const list_t *h)
{
	unsigned int con;
	const list_t *ptr;

	ptr = h;

	for (con = 0; ptr != NULL; con++)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
	}
	return (con);
}
