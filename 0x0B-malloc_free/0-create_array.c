#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - Create array of chars and initialize  with a specific char
 * @size: Size of array
 * @c: fill the array with this char
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int i = 0;

	if (size <= 0) /* Validate size input */
		return (NULL);
	arr = malloc(sizeof(char) * size); /* Allocates memory */

	if (arr == NULL) /* Validate memory */
		return (NULL);

	while (i < (int)size) /* Set array values to c */
	{
		*(arr + i) = c;
		i++;
	}
	*(arr + i) = '\0';

	return (arr);
}
