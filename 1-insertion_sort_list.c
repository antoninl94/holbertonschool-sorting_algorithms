#include "sort.h"

/**
 * swap_nodes - Swap two adjacent nodes in a doubly linked list
 * @list: Double pointer to the head of the list
 * @node1: First node to swap
 * @node2: Second node to swap
 *
 * Description: This function swaps the positions of two adjacent nodes
 * in a doubly linked list. It updates the necessary pointers to maintain
 * the integrity of the list structure.
 */
void swap_nodes(listint_t **list, listint_t *node1, listint_t *node2)
{
	if (node1->prev != NULL)
		node1->prev->next = node2;
	else
		*list = node2;

	if (node2->next != NULL)
		node2->next->prev = node1;

	node2->prev = node1->prev;
	node1->next = node2->next;
	node2->next = node1;
	node1->prev = node2;
}

/**
 * insertion_sort_list- sorts a doubly linked list of integers,
 * in ascending order using the Insertion sort algorithm
 * @list: a pointer to the list
 */
void insertion_sort_list(listint_t **list)

{
	listint_t *current, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		temp = current; /*save the actual node*/
		while (temp->prev != NULL && temp->n < temp->prev->n)
		{
			swap_nodes(list, temp->prev, temp);

			print_list(*list); /*print the list every time number was swap*/
		}
		current = current->next;
	}
}
