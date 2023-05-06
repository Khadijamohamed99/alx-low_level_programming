#include "main.h"

/**
 * get_bit - gets the bit at the index
 * @n: the number to index
 * @index: the bit to get
 *
 * Return: the bit state or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_m;

	if (index > 63)
		return (-1);

	bit_m = (n >> index) & 1;

	return (bit_m);
}
