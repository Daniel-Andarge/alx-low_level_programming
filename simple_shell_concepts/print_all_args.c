#include <stdio.h>
#include <unistd.h>

/**
 * main - prints all the arguments without using ac
 * @args: arguments
 * Return: Success 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	unsigned int i;

	i  = 0;

	while (argv[i])
	{
		printf("%s\n",  argv[i]);
		i++;
	}
	return (0);
}
