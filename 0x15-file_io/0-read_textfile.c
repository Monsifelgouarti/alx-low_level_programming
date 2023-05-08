#include <stddef.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of file to read.
 * @letters:  the number of letters it should read and print.
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *pf;
	int lp = 0;
	char c;
	
	if ((fp = fopen(filename, "r")) == NULL || filename == NULL)
		return (0);

	while ((c = getc(fp)) != feof)
	{
		write(STDOUT_FILENO, c, 1);
		lp++;
	}
	return (lp);
}
