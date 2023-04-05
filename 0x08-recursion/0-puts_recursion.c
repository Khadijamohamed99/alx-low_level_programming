#include "main.h"

/**
 * _puts_recursion - function print a string a new line
 * @s: pointer to a string
 * Return: Noo
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
