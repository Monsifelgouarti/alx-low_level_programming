#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of file to read.
 * @letters:  the number of letters it should read and print.
 * Return: the actual number of letters it could read and print.
 */
size_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	size_t lp = 0;
	char *c;

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (!fp)
		return (0);
	c = malloc(sizeof(char));
	while (lp < letters)
	{
		*c = getc(fp);
		write(STDOUT_FILENO, c, 1);
		lp++;
	}
	fclose(fp);
	return (lp);
}
