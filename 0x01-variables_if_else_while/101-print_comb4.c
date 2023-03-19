#include<stdio.h>
/**
 * main(void)? (-puts alphabets)
 * Description: prints all possible different combinations
 * of three digits.
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 9; i++)
		for (j = 1; j <= 8; j++)
		{
			for (k = 2; k <= 9; k++)
			if (i != j && j != k && i < j && j < k)
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				putchar((k % 10) + '0');
				if (k == 9 && j == 8 && i == 7)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}
