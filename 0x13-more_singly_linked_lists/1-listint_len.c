#include <stdio.h>
#include "lists.h"

/**
 * listint_len - the number of elements in a linked listint_t list.
 *
 * @h: head pointer
 *
 * Return: the number of elements
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}

	return (count);
}
