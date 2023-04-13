#include <stdio.h>
#include <stdlib.h>
/**
 * *argstostr - concatenates the args of the program.
 * @ac: number of args
 * @av: list of args
 * * Return: NULL if ac==0 or av== NULL or if it fails
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j, len = 0;
	char *ptr;

	if (ac == 1 || av == NULL)
		return (NULL);
	for (i = 1; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			j++;
		}
		len += j + 1;
	}
	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (NULL);
	len = 0;
	for (i = 1; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			ptr[len] = av[i][j];
			len++;
			j++;
		}
		ptr[len] = '\n';
		len++;
	}
	ptr[len] = '\0';
	return (ptr);
}
