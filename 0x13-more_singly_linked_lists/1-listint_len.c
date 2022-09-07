#include "lists.h"

/**
<<<<<<< HEAD
 * listint_len - returns the number of elements in a linked listint_t list
=======
 * listint_len - returns the number of eleemnts in alinked listint_t list
>>>>>>> 0db2df5e1b0da9f88ec183e5c8d2a2d6f8987bd8
 * @h: list
 * Return: number of nodes in list
 */

size_t listint_len(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		num_nodes += 1;
		h = h->next;
	}
<<<<<<< HEAD

=======
>>>>>>> 0db2df5e1b0da9f88ec183e5c8d2a2d6f8987bd8
	return (num_nodes);
}
