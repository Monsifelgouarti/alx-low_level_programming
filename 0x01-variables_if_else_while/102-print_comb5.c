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
			for (l = 0; l <= 9; l++)
			if ((i + '0'+ j + '0') != (k + '0' + l + '0'))
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				putchar(' ');
				putchar((k % 10) + '0');
				putchar((l % 10) + '0');
				if (k == 9 && j == 8 && i == 7)
				break;
				putchar(',');
				putchar(' ');
			}
	putchar('\n');
	return (0);
}
