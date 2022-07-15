#include <stdio.h>

/**
 * main : Storing the address of variable into a pointer
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;
	printf("The address of 'n' : %p\n", &n);
	printf("The value of 'p' : %p\n", &p);
	return (0);
}

