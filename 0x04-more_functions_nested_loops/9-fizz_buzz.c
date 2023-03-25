#include <stdio.h>
/**
 * main(void)? (- print a fizzbuzz)
 * Description:  prints fizzbuzz instead of multiples of 3 and 5
 * return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		if ((i % 3) == 0)
		{
			printf("Fizz ");
			continue;
		}
		if ((i % 5) == 0)
		{
			printf("Buzz ");
			continue;
		}
		else
			printf("%d ", i);
	}
	printf('\n');
	return (0);
}
