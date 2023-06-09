#include <stdlib.h>
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
	int r;

	if (filename == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (!fp)
		return (0);
	r = access(filename, R_OK);
	if (r != 0)
		return (0);
	c = malloc(sizeof(char));
	*c = getc(fp);
	while (lp < letters && *c != EOF)
	{
		write(STDOUT_FILENO, c, 1);
		*c = getc(fp);
		lp++;
	}
	fclose(fp);
	if (lp > letters)
		return (0);
	return (lp);
}
