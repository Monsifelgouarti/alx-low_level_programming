#include <stdio.h>
/**
 * main - print all argument passed
 * @argv: array of arguments
 * @argc: number of parameters passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return (0);
}
