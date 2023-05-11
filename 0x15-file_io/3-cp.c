#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
/**
 * main - copies the content of a file to another file
 * @ac: number of args.
 * @av: list of args.
 * Return: 1 on success and -1 if it fails.
 */
int main(int ac, char **av)
{
	FILE *ff, *ft;
	int fdt = 0;
	char buff[1024];

	if (ac != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
//	if (access(av[2], F_OK) != 0)
	fdt = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	ft = fopen(av[2], "w+");
	if (fdt < 0 || access(av[2], W_OK) != 0 || !ft)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		fclose(ft);
		close(fdt);
		exit(99);
	}
	if (access(av[1], F_OK) == 0)
		ff = fopen(av[1], "r");
	if (access(av[1], F_OK) != 0 || access(av[1], R_OK) != 0 || !ff)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	while (fgets(buff, 1024, ff))
		fputs(buff, ft);
	fclose(ff);
	fclose(ft);
	if (close(fdt) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdt);
		exit(100);
	}
	return (1);
}
