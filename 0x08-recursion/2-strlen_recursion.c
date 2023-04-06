#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: pointer  string
 * Return: integers
 */

int _strlen_recursion(char *s)
{
int kh = 0;

if (*s > '\0')
{
	kh = kh + _strlen_recursion(s + 1) + 1;
}

return (kh);
}
