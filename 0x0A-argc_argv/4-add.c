#include <stdlib.h>
#include <stdio.h>
/**
 * main - adds positive numbers
 * @argv: array of arguments
 * @argc: number of parameters passed
 * Return: 0 or 1 if error
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
		printf("0\n");
	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			j = 0;
			while (argv[i][j])
			{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
			}
			sum += atoi(argv[i]);
			}
		printf("%d\n", sum);
	}
	return (0);
}
