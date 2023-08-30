#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			previous->next = current->next;
		free(current);
		return (1);
	}
	previous = current;
	current = current->next;
	count++;
}
return (-1);
}

