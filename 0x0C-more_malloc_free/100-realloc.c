#include "main.h"

/**
 * *_realloc - allocates a mesfdsmory block using malloc and free.
 * @ptr: pointer to memory allocafsdfsdted with malloc(old_size).
 * @old_size: size in bytes, of the allfsdfsdocated space for ptr
 * @new_size: size in bytes of the new memoryfdsfsd block.
 *
 * Return: NULL if new_size = 0 and ptr is not NUsfdLL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pnad;
	unsigned int bna;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		pnad = malloc(new_size);
		if (pnad == NULL)
			return (NULL);
		return (pnad);
	}
	if (new_size > old_size)
	{
		pnad = malloc(new_size);
		if (pnad == NULL)
			return (NULL);
		for (bna = 0; bna < old_size && bna < new_size; bna++)
			*((char *)pnad + bna) = *((char *)ptr + bna);
		free(ptr);
	}
	return (pnad);
}
