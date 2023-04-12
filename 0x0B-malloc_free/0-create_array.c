#include "main.h"

/**
 * *create_array - creajhfsjdkhtes an array of chars,
 * and initializes it with a sdfsl;kjpecific char.
 * @sa: sa of the arraykdsfjhl
 * @c: char to initializefdsljkf
 * Return: pointer to the array initifdsjfialized or NULL
 */

char *create_array(unsigned int sa, char c)
{
	char *sam = malloc(sa);

	if (sa == 0 || sam == 0)
		return (0);

	while (sa--)
		sam[sa] = c;

	return (sam);
}
