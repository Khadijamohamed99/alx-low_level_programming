#include "main.h"

/**
 * *_strdup - return a psdfdsointer to a newly allocated space in memory
 * which contains asfdfs copy of the string given as a parameter.
 * @str: stringfdsf
 * Return: Nothing
 */

char *_strdup(char *str)
{
	int mnad = 0, si = 0;
	char *ssa;

	if (str == NULL)
		return (NULL);

	for (; str[si] != '\0'; si++)
	;

	/*+1 on the si putsdffjhsds the end of string character*/
	ssa = malloc(si * sizeof(*str) + 1);

	if (ssa == 0)
	{
		return (NULL);
	}
	else
	{

		for (; mnad < si; mnad++)
			ssa[mnad] = str[mnad];
	}
	return (ssa);
}
