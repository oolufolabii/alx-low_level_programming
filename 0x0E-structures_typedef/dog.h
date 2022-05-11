#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - A dog info using structures
 * @name: Name of the dog
 * @age: Dog's age
 * @owner: Dog owner's name
 */

struct dog
{
char *name;
float age;
char *owner;
};

char *_strcpy(char *dest, char *src);
int _strlen(char *s);

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - struct typedef
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
