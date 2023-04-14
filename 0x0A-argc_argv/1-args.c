#include <stdio.h>
/**
 * main - it prints the number of arguments
 * @argc: number of arguments passed to the program
 * @argv: list of parameters
 * Return: 0.
 */
int main(int argc, char  __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
