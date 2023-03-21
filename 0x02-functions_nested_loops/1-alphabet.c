#include<stdio.h>
#include<main.h>
/**
 * main(void)? - print _putchar
 * Description: prints _putchar, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int i;
	for (i = 'a'; i <= 'z'; i++)
		_putchart(i);
        _putchar('\n');
	return (0);
}
