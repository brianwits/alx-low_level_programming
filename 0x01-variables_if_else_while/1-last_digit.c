#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
lastn = n % 10;

printf("Last digit of %i is %i and is ", n, (n % 10));

if (lastn > 5)

{
printf("0\n");
}

else if (lastn > 5)

{
printf("greater than 5\n");
}
else
{
printf("less than 6 and not 0\n");
}

return (0);
}
