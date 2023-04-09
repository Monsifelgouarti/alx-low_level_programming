#include <stdlib.h>
#include <stdio.h>
/**
 * main - it prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int change, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (argc == 2 && atoi(argv[1]))
	{
		change = argv[1];
		count += change / 25;
		change = change % 25;
		count += change / 10;
		change = change % 10;
		count += change / 5;
		change = change % 5;
		count += change / 2;
		change = change % 2;
		count += change / 1;
		printf("%d\n", count);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
