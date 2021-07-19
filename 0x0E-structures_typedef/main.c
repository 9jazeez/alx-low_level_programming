#include <stdio.h>
#include "dog.h"

int main(void)
{
	struct dog mydog;

	init_dog(&mydog, "Puppy", 4.5, "Me");
	print("%s\n %f\n %s\n",mydog.name, mydog.age,mydog.owner);

	return (0);
}
