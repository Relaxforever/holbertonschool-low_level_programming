#ifndef _DOG_H_
#define _DOG_H_
/**
*struct dog - all the information about dogs
*@name: name of the dog
*@age: age of the dog
*@owner: name of the owner of the dog
*Description: a structure to classify dogs
*/
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
