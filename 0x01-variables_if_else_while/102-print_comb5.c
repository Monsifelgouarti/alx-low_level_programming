#include<stdio.h>
/**
 * main(void)? (-puts alphabets)
 * Description: prints all possible different combinations
 * of two tow-digits numbers.
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int j;

	while (i < 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			if (i == 98 && j == 99)
			break;
			putchar(',');
			putchar(' ');
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
