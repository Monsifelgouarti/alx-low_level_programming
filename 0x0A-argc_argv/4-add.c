#include <stdlib.h>
#include <stdio.h>
/**
 * main - adds positive number
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 * Return: 0 or 1 if it's an Error.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
		printf("0\n");
	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}	
		printf("%d\n", sum);
		return (0);
	}
	return (0);
}
