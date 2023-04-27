#include "lists.h"

/**
 * list_len - determines length of linked list
 * @h: pointer to the first node
 *
 * Return: size of list to use it.
 */
size_t list_len(const list_t *h)
{
	size_t dija = 0;

	while (h)
	{
		h = h->next;
		dija++;
	}
	return (dija);
}
