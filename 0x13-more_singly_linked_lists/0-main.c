#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
<<<<<<< HEAD
 * main - check the code for Holberton School students.
 *
=======
 * main - check the code
 * 
>>>>>>> 0db2df5e1b0da9f88ec183e5c8d2a2d6f8987bd8
 * Return: Always 0.
 */
int main(void)
{
<<<<<<< HEAD
	listint_t *head;
	listint_t *new;
	listint_t hello = {8, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}
	new->n = 9;
	new->next = head;
	head = new;
	n = print_listint(head);
	printf("-> %lu elements\n", n);
	free(new);
	return (0);
=======
    listint_t *head;
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = head;
    head = new;
    n = print_listint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
>>>>>>> 0db2df5e1b0da9f88ec183e5c8d2a2d6f8987bd8
}
