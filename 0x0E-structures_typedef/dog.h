#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog-A structure tgat defines a dog
 * @name: Name of tye dog
 * @age: Age of dog
 * @owner: Do owner
 *
 * This is a structure that takes three members.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for structure dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *, float, char *);
void print_dog(struct dog *d);
dog_t *new_dog(char *, float, char *);
void free_dog(dog_t *);
char *_strcpy(char *, char *);
int _strlen(char *);

#endif /*DOG_H*/
