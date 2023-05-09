#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * main - copies the content of a file to another file
 * @ac: number of args.
 * @av: list of args.
 * Return: 1 on success and -1 if it fails.
 */
int main(int ac, char **av)
{
	FILE *fp;
	size_t lp = 0;
	int i = 0;

	if (ac != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to", 28);
		exit(97);
	}
	fp = fopen(av[1], "r");
	if (!fp)
		return (0);
	i = access(av[1], W_OK);
	if (i != 0)
	{
		fclose(fp);
		return (-1);
	}
	fclose(fp);
	return (lp);
}
