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
	salt_t count = 0;
	const listint_t *n = h;

	while (n != NULL)
	{
		n = n->next;
		count++;
	}

	return (count);
}
