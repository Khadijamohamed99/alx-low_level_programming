#include "lists.h"

/**
 * free_list - frees all nodes of a list
 * @head: pointer to head nde
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *nde, *next_node;

	if (!head)
		return;

	nde = head;
	while (nde)
	{
		next_node = nde->next;
		free(nde->str);
		free(nde);
		nde = next_node;
	}
}
