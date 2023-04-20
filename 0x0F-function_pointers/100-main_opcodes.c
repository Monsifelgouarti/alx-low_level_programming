#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function. 
 * @argc: number of argument passed to the program
 * @argv: array of argument passed to the program
 * Return: 0.
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	return (0);
}
