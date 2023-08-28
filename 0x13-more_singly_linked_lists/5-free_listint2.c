#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the first element of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	*head = NULL;
}
