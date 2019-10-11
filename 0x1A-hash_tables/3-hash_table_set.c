#include "hash_tables.h"
#include <string.h>
#define FAILED 0
hash_node_t *add_node(hash_node_t **head, const char *str, const char
*key)
{
	hash_node_t *tmp;

	if (head == NULL)
	{
		return (NULL);
	}

	tmp = *head;
	tmp = malloc(sizeof(hash_node_t));
	if (tmp == NULL)
	{
		return (NULL);
	}
	tmp->value = strdup(str);
	tmp->key = strdup(key);
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
/**
* hash_table_set - a function that adds an element to the hash table
*@ht: is the hash table you want to add or update the key/value
*@key: the key. It cannot be an empty string
*@value: is the vale associated with the key. value must be
*duplicated. it can be an empty string
*Return: 1 if it suceed, 0 if it didn't
*/
int hash_table_set(hash_table_t *ht, const char *key, const char
*value)
{
	unsigned long int index;
	hash_node_t *tmp;
	int flag = 0;

	if (key == NULL || strcmp(key, "") == 0 || value == NULL || ht == NULL)
	{
		return (FAILED);
	}
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	if (!tmp)
	{
		if (add_node(&(ht->array[index]), value, key) == NULL)
			return (FAILED);
	}
	else
	{
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				tmp->value = strdup(value);
				flag = 1;
			}
			tmp = tmp->next;
		}
		if (flag == 0)
		{
			if (add_node(&(ht->array[index]), value, key) == NULL)
				return (FAILED);
		}
	}
	return (1);
}
