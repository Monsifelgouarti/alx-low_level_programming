#include<stdio.h>
/**
 * main(void)? (-puts alphabets)
 * Description: prints all possible different combinations 
 * of two digits.
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
		for (j = 0; j <= 9; j++)
		{
			if (i != j && i < j)
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				if (j == 9 && i == 8)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}
