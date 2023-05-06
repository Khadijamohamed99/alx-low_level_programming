#include "main.h"

/**
 * get_endianness - returns the endianness of the system
 *
 * Return: 0 if big endian, 1 if small
 */
int get_endianness(void)
{
	unsigned int vi = 1;
	char *c = (char *) &vi;

	return (*c);
}
