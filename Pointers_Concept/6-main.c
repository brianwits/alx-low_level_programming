#include <stdio.h>

/**
 * main : Dereferencing pointers,example with int and char types
 *
 * Return: Alwwys 0
 */
int main(void)
{
	int n;
	int *p;
	char c;
	char *pp;

	c = 'H';
	pp = &c;
	n = 98;
	p = &n;
	printf("The value of 'c': %d ('%c')\n", c, c);
	printf("The address of 'c': %p\n", &c);
	printf("The value of 'pp': %p\n", pp);
	printf("The value of 'n': %d\n",  n);
	printf("The address of 'n': %p\n", &n);
	printf("The value of 'p': %p\n", p);
	*p  = 402;
	*pp = 'o';
	printf("The value of 'n': %d\n", n);
	printf("The value of '*pp': %d\n", *pp);
	printf("Value of 'c': %d ('%c')\n", c, c);
	printf("The value of '*pp': %d (%c)\n", *pp, *pp);
	return (0);
}
