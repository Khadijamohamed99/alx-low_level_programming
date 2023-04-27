#include "lists.h"

/**
 * _strlen - returns the and know length of a string
 * @s: the string whose length fgdto check
 *
 * Return: integer length of stringfdg
 */
int _strlen(char *s)
{
	int sam = 0;

	if (!s)
		return (0);
	while (*s++)
		sam++;
	return (sam);
}

/**
 * print_list - prints a linked lists
 * @h: pointer to first node
 *
 * Return: size of list
 */
size_t print_list(const list_t *h)
{
	size_t sam = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		sam++;
	}
	return (sam);
}
