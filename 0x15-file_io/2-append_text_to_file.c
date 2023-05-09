#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of file to read.
 * @text_content: text to append.
 * Return: 1 on success and -1 if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;
	size_t lp = 0;
	int i = 0;

	if (filename == NULL)
		return (-1);
	fp = fopen(filename, "r");
	if (!fp)
		return (0);
	i = access(filename,W_OK);
	if (i != 0)
	{
		fclose(fp);
		return (-1);
	}
	i = 0;
	if (text_content != NULL)
	while (text_content[i] != '\0')
	{
		fputc(text_content[i], fp)
		i++;
	}
	fclose(fp);
	return (lp);
}
