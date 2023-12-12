#include "lists.h"

/**
 * get_dnodeint_at_index - returns node of a list ata a specific index
 * @head: head of the list
 * @index: index of the node to search foe
 * Return: nth node or null
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *st;

	size = 0;
	if (head == NULL)
		return (NULL);

	st = head;
	while (st)
	{
		if (index == size)
			return (st);
		st  = st->next;
	}
	return (NULL);
}
