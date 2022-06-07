#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
* main - prints "$ " waits for command, prints on next line
* @ac: number of items in av
* @av: a NULL terminated array of strings
* Return: Success 0
*/
int main(int ac, char **av)
{
	char *buf;
	size_t bufsize = 1024;
	ssize_t num_read;

	buf = NULL;

	printf("$ ");
	num_read = getline(&buf, &bufsize, stdin);
	if (num_read == -1)
		return (-1);

	printf("%s", buf);

	free(buf);
	return (0);
}
