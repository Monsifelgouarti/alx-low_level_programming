#include<stdio.h>
/**
 * main(void)? (-print combinations)
 * Description: use function putchar()
 * prints all possible combinations of single-digit numbers.
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar((i % 10) + '0');
		if (i < 9)
			putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}

