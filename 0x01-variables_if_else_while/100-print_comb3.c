#include<stdio.h>
/**
 * main(void)? (-puts alphabets)
 * Description: use function puts() to print alphabet
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 9; j++)
		{
			if (i != j && i < j)
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}
