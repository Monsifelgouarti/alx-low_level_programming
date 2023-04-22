#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function.
 * @argc: number of argument passed to the program
 * @argv: array of argument passed to the program
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	unsigned char *ma;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ma = (char *)main;
	while (i < atoi(argv[1]))
	{
		printf("%02x", ma[i]);
		i++;
	}
	printf("\n");
	return (0);
}
