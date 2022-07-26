#include <stdio.h>
#include "main.h"

/**
 * main - print number of argurments passed to program
 * @argc: argument counter
 * @argv: Poiter to array of arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{

	if (argc > 0)
	printf("%d\n", argc - 1);
	return (0);
}
