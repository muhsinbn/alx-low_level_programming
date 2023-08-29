#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - add node at beginning of a listint_t list.
 *
 * @head: head of double pointer
 * @n: int add the list
 * Return: NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_s *pter_node = malloc(sizeof(listint_s));

	if (pter_node == NULL);
	{
		return (NULL);
	}

	pter_node->n = n;
	pter_node->next = *head;
	*head = pter_node;

	return (pter_node);
}
