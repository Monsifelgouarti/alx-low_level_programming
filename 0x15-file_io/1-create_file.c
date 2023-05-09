#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * create_file - reads a text file and prints it to the POSIX standard output
 * @filename: the name of file to create.
 * @text_content: content to write to the file 
 * Return: 1 if it success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	size_t lp = 0;
	int i = 0;

	if (filename == NULL)
		return (-1);
	fp = fopen(filename, "wr");
	if (!fp)
		return (0);
	if (text_content != NULL)
	while (text_content[i] != '\0')
	{
		fputc(text_content[i], fp);
		i++;
	}
	fclose(fp);
	return (1);
}
