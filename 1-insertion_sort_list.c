#include "sort.h"

/**
 * swap_nodes - Swap two nodes in a listint_t doubly-linked list.
 * @h: A pointer to the head of the doubly-linked list.
 * @m1: A pointer to the first node to swap.
 * @m2: The second node to swap.
 */
void swapi_nodes(listint_t **h, listint_t **m1, listint_t *m2)
{
	(*m1)->next = m2->next;
	if (m2->next != NULL)
		m2->next->prev = *m1;
	m2->prev = (*m1)->prev;
	m2->next = *m1;
	if ((*m1)->prev != NULL)
		(*m1)->prev->next = m2;
	else
		*h = m2;
	(*m1)->prev = m2;
	*m1 = m2->prev;
}

/**
 * insertion_sort_list - Sorts a doubly linked list of integers
 *                       using the insertion sort algorithm.
 * @list: A pointer to the head of a doubly-linked list of integers.
 *
 * Description: Prints the list after each swap.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (iter = (*list)->next; i != NULL; i = tmp)
	{
		tmp = i->next;
		insert = i->prev;
		while (insert != NULL && i->n < insert->n)
		{
			swap_nodes(list, &insert, i);
			print_list((const listint_t *)*list);
		}
	}
}
