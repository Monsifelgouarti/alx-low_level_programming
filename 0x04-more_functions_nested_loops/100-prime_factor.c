#include <stdio.h>
/**
 * main(void)? (- print the prime factor)
 * Description:  prints the largest prime factor
 * Return: 0
 */
int main(void)
{
	long int num = 612852475143;
	int large = 2;

	while (num > 1)
	{
		if (num % large == 0)
			num = num / large;
		else
			large++;
	}
	printf("%d\n", large);
	return (0);
}
