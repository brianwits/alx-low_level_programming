#include <stdio.h>

/**
 * main : printing the size, in bytes , of a pointer
 * Pointer size is always 8 bytes
 * Return: Always 0.
 */

int main(void)
{
	int *ptr;
	char *wits;

	printf("Size of pointer: %lu\n", sizeof(ptr));
	printf("Size of pointer: %lu\n", sizeof(wits));
	return (0);
}
