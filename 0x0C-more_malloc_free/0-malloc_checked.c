#include "main.h"
/**
  *malloc_checked - is a function that allocates memory using malloc.
  *@b : is an interger value argument
  */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
