#include "main.h"

/**
 * check_match - make magic
 * Description: Checker
 * @s1: the first string
 * @s2: the second string
 * Return: 1 or 0
 */

int check_match(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (check_match(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		if (check_match(s1, s2 + 1))
		{
			return (1);
		}
		if (*s1 != '\0' && check_match(s1 + 1, s2))
		{
			return (1);
		}
	}
	return (0);
}

/**
 * wildcmp - compares strings
 * Description: string
 * @s1: the first string
 * @s2: the second string
 * Return: 1 or 0
 */

int wildcmp(char *s1, char *s2)
{
	return (check_match(s1, s2));
}
