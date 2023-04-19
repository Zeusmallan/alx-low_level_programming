#ifndef DOG_H
#define DOG_H
/**
 * struct dog - Data about dog
 * @name: Name of dog
 * @age: age of dog
 * @owner: owner of the dog.
 * Description: This is a structure for do.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*DOG_H*/