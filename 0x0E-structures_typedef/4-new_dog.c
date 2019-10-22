#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *new_dog -main entry.
 *@name: pointer to char
 *@age: float
 *@owner: pointer to char
 *Description: function that creates a new dog.
 * Return:void
 **/
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
