#include <stdio.h>
#include "main.h"

/**
 * main - print the name of program
 * @argc: argument counter
 * @argv: Pointer to array of argurments
 * Return: 0 on success
 */

int main(int argc, char *argv[1])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
