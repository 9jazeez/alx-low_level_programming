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
}

void init_dog(struct dog *d, char *, float, char *);
#endif /*DOG_H*/
