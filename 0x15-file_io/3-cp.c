#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
void closefile(int fd);

/**
 * closefile - close a file descriptor
 * @fd: id of a file descriptor to be closed.
 * Return: nothing.
 */
void closefile(int fd)
{
	int val;

	val = close(fd);
	if (val == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies the content of a file to another file
 * @ac: number of args.
 * @av: list of args.
 * Return: 1 on success and -1 if it fails.
 */
int main(int ac, char **av)
{
	int fdf, fdt, wr, re;
	char buff[1024];

	if (ac != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	fdf = open(av[1], O_RDONLY);
	fdt = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	re = read(fdf, buff, 1024);
	if (fdt == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	if (fdf == -1 || re == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	do
	{
	wr = write(fdt, buff, re);
	if (fdt == -1 || wr == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	re = read(fdf, buff, 1024);
	if (fdf == -1 || re == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
	exit(98);
	}
	fdt = open(av[2], O_WRONLY | O_APPEND);
	} while (re > 0);
	closefile(fdf);
	closefile(fdt);
	return (1);
}
