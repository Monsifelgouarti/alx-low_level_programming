#include <stdio.h>
/**
 * main - it prints the number of arguments
 * @argv: array of arguments
 * @argc: number of parameters passed
 * Return: 0
 */
int main(int argc, __attribute__((unused))char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
