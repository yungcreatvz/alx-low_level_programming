#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the list
 * Return: size of the list
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		if (h->str)
			printf("%d", h->str);
		h = h->next;
		size++;
	}
	return(size);
}
