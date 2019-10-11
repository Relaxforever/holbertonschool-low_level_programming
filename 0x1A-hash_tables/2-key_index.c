#include "hash_tables.h"
/**
*key_index - returns the index of the key
*@key: the key
*@size: the size of the array
*Return: the index of the key/value.
*/
unsigned long int key_index(const unsigned char *key, unsigned long
int size)
{
	unsigned long int hash;
	unsigned long int index;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}

