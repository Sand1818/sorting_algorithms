#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm
 * @list: doubly linked list
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *s;
	listint_t *tempor;
	listint_t *present;

	if (!list || !*list || !(*list)->next)
		return;

	present = (*list)->next;
	while (present)
	{
		s = present;
		while (s->prev && s->n < s->prev->n)
		{
			tempor = s->prev;
			if (tempor->prev)
				tempor->prev->next = s;
			s->prev = tempor->prev;
			tempor->prev = s;
			tempor->next = s->next;
			if (s->next)
				s->next->prev = tempor;
			s->next = tempor;

			if (!s->prev)
				*list = s;
			print_list(*list);
		}
		present = present->next;
	}
}
