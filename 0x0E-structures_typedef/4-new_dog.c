#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
* _strncpy - copies a string
*@dest : the destination string
*@src : the string that is going to get copied
* Return: Return the copied array
*/

char *_strncpy(char *dest, char *src)
{
	int copycont;

	for (copycont = 0; src[copycont] != '\0'; copycont++)
	{
		dest[copycont] = src[copycont];
	}
		dest[copycont] = '\0';
	return (dest);
}
/**
*new_dog - get's the new dog
*@name: name of the dog
*@age: age of the dog
*@owner: name of the owner
*Return: Always zero
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	char *nam;
	char *own;
	dog_t *newd;

	newd = malloc(sizeof(struct dog));
	if (newd == NULL)
	{
		return (NULL);
	}
	nam = malloc(sizeof(name));
	if (nam == NULL)
	{
		free(newd);
	}
	own = malloc(sizeof(owner));
	if (own == NULL)
	{
		free(nam);
		free(newd);
	}
	nam = _strncpy(nam, name);
	own = _strncpy(own, owner);

	newd->name = nam;
	newd->age = age;
	newd->owner = own;
	return (newd);
}
