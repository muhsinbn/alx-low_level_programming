#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 */
void free_list(list_t *head)
{
	while (head)
	{
		free_list(head->next);
		while (head->str)
			free(head->str);
		free(head);
	}
}
