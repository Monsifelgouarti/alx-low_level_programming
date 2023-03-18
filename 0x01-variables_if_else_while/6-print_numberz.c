#include<stdio.h>
/**
 * main(void)? (-print digit)
 * Description: prints all single digit numbers
 * of base 10 starting from 0 using putchar
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar((char)i);
		i++;
	}
	putchar('\n');
	return (0);
}
