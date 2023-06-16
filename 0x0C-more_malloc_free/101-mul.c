#include <stdio.h>
#include <stdlib.h>
int _isdigit(char *s);
/**
 * main - a program that multiplies two positive numbers.
 * @argv: list of parameters
 * @argc: number of parameters
 * Return: print the result or 98 if it fails.
 */
int main(int argc, char *argv[])
{
	int n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = _isdigit(argv[1]);
	n2 = _isdigit(argv[2]);
	if (n1 == 0 || n2 == 0)
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
/**
 * _isdigit - (- checks if digit)
 * Description: checks if a given character is a digit
 * @s: a string
 * Return: 1 if @s is a digit and 0 otherwise
 */
int _isdigit(char *s)
{
	while (*s != '\0')
	{
		if (*s < 48 || *s > 57)
			return (0);
		s++;
	}
	return (1);
}
