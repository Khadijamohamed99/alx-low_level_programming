#include "main.h"

/**
 * set_bit - sets the bit at the index
 * @n: the number to index
 * @index: the bit to set
 *
 * Return: 1 if successful, -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1 << index) | *n);
	return (1);
}
