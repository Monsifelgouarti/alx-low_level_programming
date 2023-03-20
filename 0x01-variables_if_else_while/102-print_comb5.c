#include<stdio.h>
/**
 * main(void)? (-puts alphabets)
 * Description: prints all possible different combinations
 * of two tow-digits numbers.
 * Return: 0
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 9; j++)
			for (k = 0; k <= 9; k++)
			for (l = j + 1; l <= 9; l++)
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				putchar(' ');
				putchar((k % 10) + '0');
				putchar((l % 10) + '0');
				if (j > 8)
				break;
				putchar(',');
				putchar(' ');
			}
	putchar('\n');
	return (0);
}
