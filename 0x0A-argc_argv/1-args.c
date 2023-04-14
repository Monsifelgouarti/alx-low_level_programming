#include <stdio.h>
/**
 * main - it prints the number of arguments 
 * @argc: number of arguments passed to the program
 * @argv: array of parameters
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	char *ptr = argv;

	printf("%d\n", argc - 1);
	return (0);
}
