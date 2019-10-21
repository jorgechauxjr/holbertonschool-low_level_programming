#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 **print_dog -main entry.
 *@d: pointer to struct
 *Description: function that prints a struct dog.
 * Return:void
 **/

void print_dog(struct dog *d)
{

	if (d != NULL)
	{
		printf("Name: ");
			d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
/* printf("Name: %s\n", ->name == NULL ? "(nil)\n" : d-> owner);  */
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner == NULL ? "(nil)\n" : d->owner);
	}
}
