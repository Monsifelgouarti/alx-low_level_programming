#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <string.h>
void readline(int fd, char *line);
int line_to_print(int ln);
/**
 * line_to_print - detremine the line to print from an ELF file
 * @ln: line to print
 * Return: 0 if @ln is tp print and -1 else.
 */
int line_to_print(int ln)
{
	int ltp[] = {0, 1, 2, 3, 4, 5, 6, 7, 9}, i;

	for (i = 0; i < 9; i++)
		if (ln == ltp[i])
			return (0);
	return (-1);
}
/**
 * readline - read a line from a file
 * @fd: a file descriptor
 * @line: pointer to a string to hold the line readed
 * return: nothing.
 */
void readline(int fd, char *line)
{
	char *c;
	int i = 0;

	c = malloc(sizeof(char));
	do {
		read(fd, c, 1);
		line[i] = *c;
		i++;
	} while (*c != '\n');
	line[i] = '\0';
}
/**
 * main - displays the information contained in the ELF header
 * @ac: number of args.
 * @av: list of args.
 * Return: 1 on success and -1 if it fails.
 */
int main(int ac, char **av)
{
	int fd, nbline = 0;
	char elf[3], line[100];

	fd = open(av[1], O_RDONLY);
	if (ac != 2 || fd == -1)
	{
		write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 31);
		exit(98);
	}
	read(fd, elf, 3);
	if (strcmp(elf, "EFL") != 0)
	{
		dprintf(STDERR_FILENO, "file %s is not an EFL file\n", av[1]);
		exit(98);
	}
	lseek(fd, 0, SEEK_SET);
	while (nbline < 9)
	{
		readline(fd, line);
		if (line_to_print(nbline) == 0)
			printf("%s", line);
		nbline++;
	}
	close(fd);
	return (0);
}
