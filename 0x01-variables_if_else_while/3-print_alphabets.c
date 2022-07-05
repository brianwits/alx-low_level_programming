#include <stdio.h>
/**
 * main -print lowercase and uppercase using putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';

/* print lowercase a-z'*/
	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);

}

