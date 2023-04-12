#include "main.h"

/**
 * _strlen - find lengthgfdgd of a string
 * @s: stringgfdgdf
 * Return: intgfdgfd
 */


int _strlen(char *s)
{
	int mnsa = 0;

	for (; s[mnsa] != '\0'; mnsa++)
	;
	return (mnsa);
}

/**
 * *argstostr - descriptionfdd
 * @ac: intdfgfd
 * @av: argumentfgdgfds
 * Return: stringgfdgfd
 */

char *argstostr(int ac, char **av)
{
	int saw = 0, sadwq = 0, sam = 0, swsa = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; saw < ac; saw++, sadwq++)
		sadwq += _strlen(av[saw]);

	s = malloc(sizeof(char) * sadwq + 1);
	if (s == 0)
		return (NULL);

	for (saw = 0; saw < ac; saw++)
	{
		for (sam = 0; av[saw][sam] != '\0'; sam++, swsa++)
			s[swsa] = av[saw][sam];

		s[swsa] = '\n';
		swsa++;
	}
	s[swsa] = '\0';
	return (s);
}
