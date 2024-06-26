#include "sort.h"
/**
 * insertion_sort_list - sort the array using insertion sort algorithm
 *
 * @list: The list to be printed
 */
void insertion_sort_list(listint_t **list)
{listint_t *current, *key, *temp;

	if (list == NULL || *list == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		key = current;
		while (key->prev != NULL && key->n < key->prev->n)
		{
			temp = key->prev;
			key->prev = temp->prev;
			temp->next = key->next;
			key->next = temp;

			if (temp->prev != NULL)
				temp->prev->next = key;
			else
				*list = key;

			temp->prev = key;

			if (temp->next != NULL)
				temp->next->prev = temp;

			print_list(*list);
		}
		current = current->next;
	}
}
