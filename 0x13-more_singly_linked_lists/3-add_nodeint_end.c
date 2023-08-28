#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the first element of the list
 * @n: new input data to insert into the new node
 * Return: Adress of new node or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n);
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);
	while (head)
		head = head->next;

	temp->n = n;
	temp->next = NULL;
	head->next = &temp;

	return (&temp);
}
