#include "lists.h"

/**
 * add_node - adds a node to the start of the list
 * @head: address of pointer to head node
 * @str: str field of node
 *
 * Return: size of list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nw_head = malloc(sizeof(list_t));

	if (!head || !nw_head)
		return (NULL);
	if (str)
	{
		nw_head->str = strdup(str);
		if (!nw_head->str)
		{
			free(nw_head);
			return (NULL);
		}
		nw_head->len = _strlen(nw_head->str);
	}

	nw_head->next = *head;
	*head = nw_head;
	return (nw_head);
}
