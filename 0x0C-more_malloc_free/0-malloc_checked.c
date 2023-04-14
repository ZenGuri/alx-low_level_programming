#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked -  allocates memory using malloc
 * @b: unsigned int
 * Return: pointer to the allocated memory or 98
 */
void *malloc_checked(unsigned int b)
{
	void *memo;

	memo = malloc(b);
	if (memo == NULL)
		exit(98);

	return (memo);
}
