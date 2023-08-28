#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the first element of list
 * Return: the deleted elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int number;

	if (*head == NULL)
		return (0);
	number = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (number);
}
