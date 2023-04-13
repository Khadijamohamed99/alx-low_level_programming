#include "main.h"

/**
 * *malloc_checked - allocates memory using malloc and exit if failed
 * @b: int
 * Return: pointer to the array initialized or NULL
 */

void *malloc_checked(unsigned int b)
{
	int *sadsad = malloc(b);

	if (sadsad == 0)
		exit(98);

	return (sadsad);
}
