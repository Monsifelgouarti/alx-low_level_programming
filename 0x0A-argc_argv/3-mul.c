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

	if (argc >= 3)
	{
		i = int(argv[1]) * int(argv[2]);
		printf("%d\n", i);
		return (0);
	}
	else
	{
		printf("Error");
		return (1);
	}
}
