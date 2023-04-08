#include <stdlib.h>
#include <stdio.h>
/**
 * main - it prints all arguments passed
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
