#include "lists.h"

/**
 * sum_listint - calc the sum of datas in a given list
 * @head: first node of the  list
 * Return: sum of nodes contents
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
