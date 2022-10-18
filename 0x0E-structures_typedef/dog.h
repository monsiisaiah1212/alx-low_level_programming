#ifndef _dog_h_
#define _dog_h_

/**
 * struct dog - create a struct
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: create a struct
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
void free_dog(dog_t *d);

#endif /* _dog_h */
