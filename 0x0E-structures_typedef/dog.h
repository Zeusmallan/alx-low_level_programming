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
typedef struct dog dog_d;
void info_dog(struct dog *d, char *name, float age, char *owner);
void show_dog(struct dog *d);
dog_d *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /*DOG_H*/
