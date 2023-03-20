#ifndef dog_h
#define dog_h

/**
 * struct dog - the bisc info of dog
 * @name: first of dog
 * @age: is the age of dog
 * @owner: the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - chage dog to dog_t
 */
typedef struct dog dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
