#include <stdio.h>
/**
 * main - print the program name
 * @argv: array of arguments
 * @argc: number of parameters passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
