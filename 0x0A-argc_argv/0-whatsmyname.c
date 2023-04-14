#include <stdio.h>
/**
 * main - it prints it's name
 * @argv: array of arguments
 * @argc: number of parameters passed
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
