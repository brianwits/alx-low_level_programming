#include <unistd.h>

/**
 * _putchar - write the charcter c to stdout
 * @c: The charcater to print
 *
 * Return: on success 1
 * on erro, 1 is returned and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
