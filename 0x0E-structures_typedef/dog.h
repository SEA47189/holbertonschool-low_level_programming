#ifndef DOG
#define DOG
#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - newly defined structure for dogs
 * @a: name
 * @b: age
 * @c: owner
 * Description: struct to give ouput of dogs info
 */
struct dog
{
char *name;
float age;
char *owner;
};
#endif

/* Prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
