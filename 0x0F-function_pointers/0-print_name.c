#include <stdlib.h>

/**
 * print_name - execute a function iven as a parameter
 * @name: parameter that functio ptr needs
 * @f:function to execute
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
