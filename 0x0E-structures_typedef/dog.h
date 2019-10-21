#ifndef TASK3
#define TASK3
/**
 *struct dog -main entry.
 *@name: pointer to a char
 *@age: float
 *@owner: pointer to a char
 *Description: types struct dog
 **/

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* TASK3 */
