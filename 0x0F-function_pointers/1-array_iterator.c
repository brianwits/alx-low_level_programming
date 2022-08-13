#include <stddef.h>

/* defines size_t */

/**
 * array_iterator - exceute function on an array via function ptr
 * @array: array
 * @size: size of an array
 * @action: pointer to function that we need to execute
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i; /* Match data type */

	if (array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(*(array + i));
}
