#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
/**
 * create_file - creates a file.
 * @filename: the name of file to create.
 * @text_content: content to write to the file
 * Return: 1 if it success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	int i = 0, stat, f;

	if (filename == NULL)
		return (-1);
	stat = access(filename, F_OK);
	if (stat != 0)
	{
		f = open(filename, O_WRONLY | O_CREAT
				| O_TRUNC, S_IRUSR | S_IWUSR);
		if (f == -1)
			return (-1);
	}
	stat = access(filename, R_OK);
	if (stat != 0)
		return (-1);
	fp = fopen(filename, "w");
	if (!fp)
		return (-1);
	if (text_content != NULL)
	while (text_content[i] != '\0')
	{
		fputc(text_content[i], fp);
		i++;
	}
	fclose(fp);
	return (1);
}
