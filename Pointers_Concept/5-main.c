#include <stdio.h>

/**
 * main -Derefrencing pointers
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;
	printf("The value of 'n': %d\n", n);
	printf("The address of 'n': %p\n", &n);
	printf("The value of 'p': %p\n", p);
	*p = 402;
	printf("The value of 'n': %d\n", n);
	return (0);
}
