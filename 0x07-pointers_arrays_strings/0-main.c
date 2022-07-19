#include "main.h"
#include <stdio.h>

/**
 * Simple print buffer - Prints buffer in hexa
 * @buffer - The address of memory to print
 * @size: The size of the memory to print
 *
 * Return: Nohing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
			printf(" ");
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[1]);
		i++;
	}
	printf("\n");
}
/**
 * main - check  the code for Holberton Students
 *
 * Return:  Always 0.
 */
int main(void)
{
	char buffer[98] = {0x00};

	simple_print_buffer(buffer, 98);
	_memset(buffer, 0x01, 95);

	printf("-------------------------------------------------\n");
	simple_print_buffer(buffer, 98);
	return (0);
}
