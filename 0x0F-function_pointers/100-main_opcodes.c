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
	unsigned char opc;
	int i, (*fun_ptr)(int, char **) = main;

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
	
	while (i < atoi(argv[1]))
	{
		opc = *(unsigned char *) fun_ptr;
		printf("%02x", opc);
		i++;
		printf(" ");
		fun_ptr++;
	}
	printf("\n");
	return (0);
}
