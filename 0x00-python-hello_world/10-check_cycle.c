#include "lists.h"

/**
 * check_cycle - checks for a cycle in linked list
 * @list: linked list to check
 *
 * Return: 1 (list has a cycle) 0 (it doesn't)
 */

int check_cycle(listint_t *list)
{
	listint_t *slow = list;
	listint_t *fast = list;

	if (!list)
		return (0);

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			return (1);
	}

	return (0);
}
