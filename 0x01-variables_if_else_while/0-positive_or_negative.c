#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a random number and states whether
 *         it is positive, negative, or zero.
 *
 * Return: Always 0.
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 1)
printf("%d is positive\n",n);
else if (n < 0)
prinf("%d is negative",n);
else

printf("%d is zero\n", n);

retun (0);
}

